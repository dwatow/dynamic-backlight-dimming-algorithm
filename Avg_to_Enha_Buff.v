`timescale 1ns / 1ps
module Avg_to_Enha_Buff(iODCK, iRST, iWEA, iLineSum, iBlockData, oWEA, oLineSum, oBlockData);

input iODCK;
input iRST;
input        iWEA;
input [13:0] iLineSum;
input [ 7:0] iBlockData;

output        oWEA;
output [13:0] oLineSum;
output [ 7:0] oBlockData;

reg        oWEA;
reg [13:0] oLineSum;
reg [ 7:0] oBlockData;

always@(posedge iODCK, negedge iRST)
begin
   if(!iRST)
	begin
      oWEA       <= 0;
      oLineSum   <= 0;
      oBlockData <= 0;
	end
	else
	begin
	   oWEA       <= iWEA;
      oLineSum   <= iLineSum;
      oBlockData <= iBlockData;
   end		
end
endmodule
