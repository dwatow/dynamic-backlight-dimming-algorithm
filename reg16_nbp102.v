//--------------------------------------------------
//4-bit register for Non-blocking Procedural Assignment
//Filename : reg_nbp.v
//--------------------------------------------------
module reg16_nbp10(Qout1, Qout2, Qout3, Qout4, Qout5, Qout6, Qout7, Qout8, Qout9, Qout10,CS_set,
							clock, reset, EN_count, Din);
						
output reg [15:0] Qout1, Qout2, Qout3, Qout4, Qout5, Qout6, Qout7, Qout8, Qout9, Qout10;
output reg CS_set=0;
input clock, reset, EN_count;
input [15:0] Din;
reg [3:0] CS_temp;

always @ ( posedge clock or posedge reset)
//Positive edge clock and asynchronous reset negedge
 
 if (reset)
  begin
// CS_set <= 0;
   Qout1 <= 16'h0000;
	Qout2 <= 16'h0000;
	Qout3 <= 16'h0000;
	Qout4 <= 16'h0000;
	Qout5 <= 16'h0000;
	Qout6 <= 16'h0000;
	Qout7 <= 16'h0000;
	Qout8 <= 16'h0000;
	Qout9 <= 16'h0000;
	Qout10 <= 16'h0000;
  end
else if (EN_count)
	begin
//	CS_set <= 1;
	Qout1 <= Din;
	Qout6 <= Qout1;
	Qout2 <= Qout6;
	Qout7 <= Qout2;
	Qout3 <= Qout7;
	Qout8 <= Qout3;
	Qout4 <= Qout8;
	Qout9 <= Qout4;
	Qout5 <= Qout9;
	Qout10 <= Qout5;
	end
//else
// CS_set <= 0;
   
always @(posedge clock or posedge reset)
if (reset) 
	begin 
		CS_temp <= 0;
		CS_set <= 0;
	end
else if (EN_count) 
	begin
		CS_temp <= CS_temp + 1;
	   if (CS_temp == 9)
		CS_set <= 1;
	end
else
	begin
		CS_temp <= 0;
		CS_set <= 0; 
	end

endmodule
