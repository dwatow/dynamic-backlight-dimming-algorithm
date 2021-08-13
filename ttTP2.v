`timescale 1ns / 1ps
module ttTP(iODCK, iRST, iSW, iWEA, iData, iAddress, oTP);

   input iODCK;
   input iRST;
   input [8:0] iSW;
	
	//to ram lines
	input iWEA;
	input [7:0] iData;
	input [8:0] iAddress;
	
   output [7:0] oTP;

   reg [7:0] oTP;
   reg [7:0] tTP;

wire en;
assign en  = ((iSW == iAddress) & iWEA) ? 1'b1 : 1'b0 ;

always@(posedge iODCK, negedge iRST)
begin
   if(!iRST)
	   oTP <= 0;
	else
   begin
	   tTP <= (en) ? iData : tTP;
      oTP <= tTP;
	end
end
endmodule
