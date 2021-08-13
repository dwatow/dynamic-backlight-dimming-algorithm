`timescale 1ns / 1ps
//module EnhaSel(iODCK, iRST, iBpixel, iEnhaRate, oBlockData);
//module EnhaSel(iODCK, iBpixel, iEnhaRate, oBlockData);
module EnhaSel(iBpixel, iEnhaRate, oBlockData);
	 
//input iODCK;
//input iRST;

//input [7:0] iBlockData_En;
input [7:0] iBpixel;
input [1:0] iEnhaRate;
//input [3:0] iEnhaRate_b;

output [7:0] oBlockData;
//reg [7:0] oBlockData;

//wire [7:0] shift_double;
wire [7:0] shift_half;
wire [7:0] shift_quarter;

wire [7:0] sum1;

//assign shift_double  = ()iBpixel << 1;
assign shift_half    = (iEnhaRate[1]) ? iBpixel >> 1 : 8'h00;
assign shift_quarter = (iEnhaRate[0]) ? iBpixel >> 2 : 8'h00;

//assign sum1 = shift_double + shift_half + shift_quarter + iBpixel;
assign sum1 = ((shift_half + shift_quarter)>255) ? 8'hff : shift_half + shift_quarter;

assign oBlockData = iBpixel - sum1;

//always@(posedge iODCK)
//begin
//
//
//end
endmodule
