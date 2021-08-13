// 191.534MHz
module max(iODCK, iRST, iPixelData, iV_Duty, iH_Duty, oBlockData);

   input       iODCK;
   input       iRST;
   input       iV_Duty;
   input       iH_Duty;
   input  [7:0] iPixelData;
   output [7:0] oBlockData;
	
reg [7:0] oBlockData;
reg [7:0]  temp_Data;

always@(posedge iODCK,negedge iRST)
begin
   if(!iRST)
   begin
      temp_Data  <= 0;
		oBlockData <= 0;
   end
   else
   
	begin
      //max
      if(iV_Duty)
      begin
         if(iH_Duty)
            //if(temp_Data < iPixelData[7:0])   temp_Data[7:0] <= iPixelData[7:0];
            temp_Data <= (temp_Data < iPixelData) ? iPixelData : temp_Data;
         else
            oBlockData    <= temp_Data;
      end
      else
		begin
         temp_Data  <= 0;
         oBlockData <= oBlockData;
		end
   end
end
endmodule
