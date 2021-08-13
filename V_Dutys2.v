`timescale 1ns / 1ps
//173.641MHz
module V_Dutys(iODCK, iVSYNC_rst, iDE, iDutySW, oV_Duty);

input iODCK;
input iVSYNC_rst;
input iDE;
input [1:0] iDutySW;
output oV_Duty;
reg    oV_Duty;
	 
reg [17:0] Count1;//0-158120(=2200*72-280))-1
reg [17:0] Count2;//0-158120(=2200*72-280))-1

parameter [1:0]
S0 = 2'b00,
S1 = 2'b01,
S2 = 2'b10,
S3 = 2'b11;

reg [1:0] CS,NS;
wire adden1,adden2;

wire [17:0] V_Block_Duty_pre_line1;
wire [17:0] V_Block_Duty_pre_line2;

reg tODCK;

always@(posedge iODCK, posedge iVSYNC_rst)
begin
   if(iVSYNC_rst)
      tODCK <= 0;
   else
      tODCK <= ~tODCK;
end

always@(posedge tODCK, posedge iVSYNC_rst)
begin
   if(iVSYNC_rst)
      CS <= S0;
   else
      CS <= NS;
end

assign adden1 = (NS == S1) ? 1'b1 : 1'b0;
assign adden2 = (NS == S3) ? 1'b1 : 1'b0;
                                                   //  AVG      MAX
assign V_Block_Duty_pre_line1 = (iDutySW == 2'b01) ? 140520 : 158120;
//140520 = 2200*64-280
//158120 = 2200*72-280

assign V_Block_Duty_pre_line2 = (iDutySW == 2'b01) ? 17550 : 4;
//17600 = 2200*(72-64)
//    0 = 2200*(72-72)

always@(posedge tODCK ,posedge iVSYNC_rst)
begin
   if(iVSYNC_rst)
	begin
      Count1 <= 0;
      Count2 <= 0;
	end
   else if(adden1)
	begin
      Count1 <= Count1 + 2;
		Count2 <= 0;
	end
   else if(adden2)
	begin
      Count1 <= 0;
		Count2 <= Count2 + 2;
	end
   else
	begin
      Count1 <= Count1;
      Count2 <= Count2;
	end
end

always@(CS,iDE,Count1,Count2,V_Block_Duty_pre_line1,V_Block_Duty_pre_line2)
begin
   case(CS)
   S0:
   begin
      //zeroen
      oV_Duty = 0;
      if(iDE)
         NS = S1;
      else
         NS = S0;
   end
   S1:
   begin
      //adden
      oV_Duty = 1;
      if(Count1 == V_Block_Duty_pre_line1)//158120 = 2200*72-280
         NS = S2;
      else
         NS = S1;
   end
   S2:
   begin
      oV_Duty = 1;
      if(iDE)
         NS = S2;
      else
         NS = S3;
   end   
   S3:
   begin
      oV_Duty = 0;
      if(Count2 == V_Block_Duty_pre_line2)
         NS = S0;
      else
         NS = S3;
   end  
   endcase
end
endmodule
