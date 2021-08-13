//184.775MHz
module Average(iODCK, iRST, iPixelData, iH_Duty, iV_Duty, iSw_0Max_1Avg, oBlockData, oLineSum, oEnEnha);
//module Average(iODCK, iPixelData, iH_Duty, iV_Duty, oBlockData, oLineSum);

   input       iODCK;
   input       iRST;
   input [7:0] iPixelData;
   input       iH_Duty;
   input       iV_Duty;
   input [3:0] iSw_0Max_1Avg;
   
   output [ 7:0] oBlockData;
   
   output [13:0] oLineSum;
   output oEnEnha;
   

reg   [13:0] oLineSum;
//wire          oEnEnha;

reg [13:0] H_temp_Data;//
reg [13:0] V_temp_Data;//1111_1111_0000_00
reg   [ 1:0] count;

assign oBlockData = ((V_temp_Data >> iSw_0Max_1Avg) > 255) ? 8'hFF : V_temp_Data >> iSw_0Max_1Avg;
assign oEnEnha    = (count == 1) ? 1'b1 : 1'b0;

always@(posedge iODCK, posedge iH_Duty)
begin
   if(iH_Duty)
   begin
      count <= 0;
   end
   else
      if(iV_Duty)
         if(count == 3)
		      count <= 3;
		   else
            count <= count + 1;
		else
		   count <= 3;
end
always@(posedge iODCK, negedge iRST)
begin
   if(!iRST)
   begin
      H_temp_Data <= 0;
      V_temp_Data <= 0;
   end
   else
   if(iV_Duty)
   begin
      if(iH_Duty)
      begin
         //Change Your Code at Pre Pixel
         H_temp_Data <= H_temp_Data + {6'b000000,iPixelData[7:0]};
         V_temp_Data <= V_temp_Data;
      end
      else
      begin
         //Change Your Code at Pre Line
         V_temp_Data <= V_temp_Data + {6'b000000,H_temp_Data[13:6]};
         oLineSum    <= H_temp_Data;
         H_temp_Data <= 0;
      end
   end
   else
   //Output and Clear Pre Pixel reg
   begin
      H_temp_Data <= 0;
      V_temp_Data <= V_temp_Data;
   end
end
endmodule
