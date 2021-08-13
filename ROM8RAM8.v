`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:57:26 12/14/2009 
// Design Name: 
// Module Name:    ROM8RAM8 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////OAOAOA
module ROM8RAM8(clock, clock_dvi, enable_I, enable_O, WEA, W_addr, R_addr,  I_dataA, O_dataO, O_dataA,I_dataO,WEO
    );
	 
	input clock, clock_dvi, enable_I,  WEA,  W_addr, R_addr,  I_dataA,I_dataO ,WEO;
	output enable_O, O_dataO, O_dataA;
	
   parameter RAM_WIDTH = 8;
   parameter RAM_ADDR_BITS = 9;//2**9==512 only 360 +??


	reg [RAM_WIDTH-1:0] ROM [(2**RAM_ADDR_BITS)-1:0];
	reg [RAM_WIDTH-1:0] RAM [(2**RAM_ADDR_BITS)-1:0];
	
	wire [RAM_ADDR_BITS-1:0] 	R_addr, W_addr;
   wire [RAM_WIDTH-1:0] 		I_dataA, I_dataO; //wire don't use  "="
   reg [RAM_WIDTH-1:0] 			O_dataA = 0,O_dataO = 0;
	reg enable_O;
   //  The following code is only necessary if you wish to initialize the RAM 
   //  contents via an external file (use $readmemb for binary data)
   initial begin
   	$readmemh("ROM.data", ROM, 0 ,511 );
		$readmemh("RAM.data", RAM, 0 ,511 );
	end
	
   always @(posedge clock) begin
     	if (enable_I) begin				
			O_dataO <= ROM[R_addr];		//ROM 
			O_dataA <= RAM[R_addr];		//RAM 
		end 
		enable_O <= enable_I;			//enable delay 1CLK   
		if (WEO)								//ROM 
			ROM[W_addr] <= I_dataO;	
	end
	
	always @(posedge clock_dvi) begin
		
		if (WEA)								//RAM 
			RAM[W_addr] <= I_dataA;
	end

endmodule
