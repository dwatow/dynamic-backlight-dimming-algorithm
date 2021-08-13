`timescale 1ns / 1ps
module WhiteAndBlack(iODCK, iRST, iSWthreshold, iPixelData, iV_Duty, iH_Duty, oBlockData);

   input       iODCK;
   input       iRST;
   input [7:0] iPixelData;
   input       iV_Duty;
   input       iH_Duty;
   input [7:0] iSWthreshold;

   output [7:0] oBlockData;

   reg  [7:0] oBlockData;
	
   wire en1;
	assign en1 = ((iPixelData > {2'b00, iSWthreshold})||(oBlockData == 8'hFF)) ? 1'b1 : 1'b0;

	
always@(posedge iODCK,negedge iRST)
begin
   if(!iRST)
   begin
      oBlockData <= 0;
   end
   else
	begin
      if(iV_Duty)
         if(iH_Duty)
            oBlockData <= (en1) ? 8'hFF : 8'h00;
         else
			begin
			   oBlockData <= oBlockData;
			end
		else
		   oBlockData <= oBlockData;
	end
end
endmodule
