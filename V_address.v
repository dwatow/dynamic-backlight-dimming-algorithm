`timescale 1ns / 1ps

module V_address(iODCK, iVSYNC_Preframe_rst, iV_Count, oV_Address);

    input iODCK;
	 input iVSYNC_Preframe_rst;
    input [11:0]	iV_Count;
	 output [3:0] oV_Address;
	 
	 reg [3:0] oV_Address;

parameter [10:0] V_BACK = 11'd37;

//---------------------------------------------------
// v Count Part 2
//---------------------------------------------------
always@(posedge iODCK, posedge iVSYNC_Preframe_rst)
begin
	if(iVSYNC_Preframe_rst)
		oV_Address <= 4'd15;
	else
	begin
			  if(iV_Count >= (    0 + V_BACK ) && iV_Count < (   72 + V_BACK  ) ) oV_Address <= 4'd00;
		else if(iV_Count >= (   72 + V_BACK ) && iV_Count < (  144 + V_BACK  ) ) oV_Address <= 4'd01;
		else if(iV_Count >= (  144 + V_BACK ) && iV_Count < (  216 + V_BACK  ) ) oV_Address <= 4'd02;
		else if(iV_Count >= (  216 + V_BACK ) && iV_Count < (  288 + V_BACK  ) ) oV_Address <= 4'd03;
		else if(iV_Count >= (  288 + V_BACK ) && iV_Count < (  360 + V_BACK  ) ) oV_Address <= 4'd04;
		else if(iV_Count >= (  360 + V_BACK ) && iV_Count < (  432 + V_BACK  ) ) oV_Address <= 4'd05;
		else if(iV_Count >= (  432 + V_BACK ) && iV_Count < (  504 + V_BACK  ) ) oV_Address <= 4'd06;
		else if(iV_Count >= (  504 + V_BACK ) && iV_Count < (  576 + V_BACK  ) ) oV_Address <= 4'd07;
		else if(iV_Count >= (  576 + V_BACK ) && iV_Count < (  648 + V_BACK  ) ) oV_Address <= 4'd08;
		else if(iV_Count >= (  648 + V_BACK ) && iV_Count < (  720 + V_BACK  ) ) oV_Address <= 4'd09;
		else if(iV_Count >= (  720 + V_BACK ) && iV_Count < (  792 + V_BACK  ) ) oV_Address <= 4'd10;
		else if(iV_Count >= (  792 + V_BACK ) && iV_Count < (  864 + V_BACK  ) ) oV_Address <= 4'd11;
		else if(iV_Count >= (  864 + V_BACK ) && iV_Count < (  936 + V_BACK  ) ) oV_Address <= 4'd12;
		else if(iV_Count >= (  936 + V_BACK ) && iV_Count < ( 1008 + V_BACK  ) ) oV_Address <= 4'd13;
		else if(iV_Count >= ( 1008 + V_BACK ) && iV_Count < ( 1080 + V_BACK  ) ) oV_Address <= 4'd14;
		else																							 oV_Address <= 4'd15;
	end
end
endmodule
