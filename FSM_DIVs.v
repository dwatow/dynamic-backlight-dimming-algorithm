`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:28:23 11/19/2009 
// Design Name: 
// Module Name:    FSM_DIVs 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FSM_DIVs( clock, reset, Qscan, enable_Dout , Dout_addr ,HSYNC, FSM_hold
    );//SPI_CS_16, , Qout, Qscan, Count_A, Count_B, Count_C, Count_D, Dinit_addr, enable_A, enable_B,
input clock;
input reset;
 reg SPI_CS_16 = 0 ;		 
output reg  FSM_hold = 0;			 
output reg  HSYNC;
 reg [8:0] Htemp = 0;

parameter ROM_WIDTH = 9;
 reg [ROM_WIDTH-1:0] Qout;
output reg [2:0] Qscan;

 reg [3:0]	Count_A = 9;    	//0~9 count 10 bit init value for slpo
 reg [7:0]	Count_B = 124;		//120 clk for spi data out timing, 5 clk delay
 reg [3:0]	Count_C = 15;    	//16 times for B
 reg [6:0]	Count_D = 125;		//128 times   
										//init 50.0 MHZ 106*3+2=320 125-> 126 -> 127 -> 0
 reg [ROM_WIDTH-1:0] Dinit_addr= 9'h1D8;
output reg [ROM_WIDTH-1:0] Dout_addr = 0;
 reg enable_A = 0, enable_B = 0 ;
output reg enable_Dout = 0;

parameter [2:0]
S0=3'b000,
S1=3'b001,
S2=3'b010,
S3=3'b011,
S4=3'b100,
S5=3'b101,
S6=3'b110,
S7=3'b111;

reg [2:0] CS=S6;
reg [2:0] NS;

always@(posedge clock  or posedge reset)
begin 
	if (reset)
		begin
		 Htemp <= 0;
		 HSYNC <= 0; 		
		end
	else 
	begin
		Htemp <= Htemp + 1;
		
		if (Htemp == 1) //50M/5=10MHz 
		begin
		 HSYNC <= 1; 		
		end
	   if (Htemp == 4)
		begin 
			Htemp <= 0;
			HSYNC <= 0; 	
		end
	end 
end


always@(posedge clock  or posedge reset)
begin
	 if (reset)
		 begin
			  Count_B <= 124;
			  Count_C <= 15;
			  Count_D <= 125;//init 125-> 126 -> 127 -> 0
			  SPI_CS_16 <= 0;
			  //FSM_hold <= 0;
			  CS=S6;		//
		 end
	 else
		 begin
			Count_B <= Count_B +1;
			
			if(Count_B == 124 ) //125B*16C=2000
				begin
					Count_B <= 0;
					Count_C <=Count_C + 1;
					
					if (Count_C == 15 ) //16
				   begin
						Count_C <= 0;
						Count_D <= Count_D + 1;
						
						if (Count_D == 4) 	//blank time 0~4  sr=1us
							CS=NS;				//
						if (Count_D == 126) 	//init A
							CS=NS;				//
						if (Count_D == 127) 	//init B
							CS=NS;				//50.0 MHZ
													//64.1hZ 125*3=375 time (bad)
						if(Count_D == 68 ) 	//75HZ  111*3=333 time
													//100Hz 83 *3=249 time
													//120Hz 69 *3=207 time  (best)
							begin
								Count_B <= 0;
								Count_C <= 0;
								Count_D <= 0;  //begin 0~105
								//FSM_hold <= 0;
								CS=NS;			//
							end	
						else 
							begin
								//FSM_hold <= 1;
							end
					end
				end
			else if (Count_B == 0  && (Count_D == 0 || Count_D == 126 || Count_D == 127 ) )	//first&& Count_C == 0
				begin
					SPI_CS_16 <= 1;
				end
			else
				begin
					SPI_CS_16 <= 0;
				end

		 end
end

   
always @(posedge clock)
			//count_A 10 times
	if (reset)
	begin
	   Count_A 	<= 9;
		enable_A	<= 0;
		enable_B	<= 0;
	end
	else if (SPI_CS_16)
	begin
		Count_A 	<= 0;
		enable_A	<= 1;
		if (Count_D == 0)
		begin
			case (Count_C)
				4'b0000: begin Dinit_addr <= 9'h1FE; enable_B <= 0;  end	//off 510 h1FE
				4'b0001: begin Dinit_addr <= 9'h1FF; enable_B <= 0;  end	//off 511
				4'b0010: begin Dinit_addr <= Qout + 9'h000; enable_B <= 1; end
				4'b0011: begin Dinit_addr <= Qout + 9'h001; enable_B <= 1; end
				4'b0100: begin Dinit_addr <= Qout + 9'h002; enable_B <= 1; end
				4'b0101: begin Dinit_addr <= Qout + 9'h003; enable_B <= 1; end
				4'b0110: begin Dinit_addr <= Qout + 9'h004; enable_B <= 1; end
				4'b0111: begin Dinit_addr <= Qout + 9'h005; enable_B <= 1; end
				4'b1000: begin Dinit_addr <= Qout + 9'h006; enable_B <= 1; end
				4'b1001: begin Dinit_addr <= Qout + 9'h007; enable_B <= 1; end
				4'b1010: begin Dinit_addr <= Qout + 9'h008; enable_B <= 1; end
				4'b1011: begin Dinit_addr <= Qout + 9'h009; enable_B <= 1; end
				4'b1100: begin Dinit_addr <= Qout + 9'h00A; enable_B <= 1; end
				4'b1101: begin Dinit_addr <= Qout + 9'h00B; enable_B <= 1; end
				4'b1110: begin Dinit_addr <= 9'h1FC; enable_B <= 0; end	//on 508
				4'b1111: begin Dinit_addr <= 9'h1FD; enable_B <= 0; end	//on 509
				default: begin Dinit_addr <= 9'h1FF; enable_B <= 0; end	//on 511
			endcase	 
		end
		else
		begin
		//Dinit_addr <= Qout + Count_C;
			case (Count_C)
				4'b0000: begin Dinit_addr <= Qout + Count_C; end	
				4'b0001: begin Dinit_addr <= Qout + Count_C; end
				4'b0010: begin Dinit_addr <= Qout + Count_C; end
				4'b0011: begin Dinit_addr <= Qout + Count_C; end
				4'b0100: begin Dinit_addr <= Qout + Count_C; end
				4'b0101: begin Dinit_addr <= Qout + Count_C; end
				4'b0110: begin Dinit_addr <= Qout + Count_C; end
				4'b0111: begin Dinit_addr <= Qout + Count_C; end
				4'b1000: begin Dinit_addr <= Qout + Count_C; end
				4'b1001: begin Dinit_addr <= Qout + Count_C; end
				4'b1010: begin Dinit_addr <= Qout + Count_C; end
				4'b1011: begin Dinit_addr <= Qout + Count_C; end
				4'b1100: begin Dinit_addr <= Qout + Count_C; end
				4'b1101: begin Dinit_addr <= Qout + Count_C; end
				4'b1110: begin Dinit_addr <= Qout + Count_C; end
				4'b1111: begin Dinit_addr <= Qout + Count_C; end
				default: begin Dinit_addr <= Qout + Count_C; end
			endcase	 		
		end
	end

	else if (Count_A == 9)
			begin
			Count_A 	<= 9;
			enable_A	<= 0;
			enable_B	<= 0;
			end
	 else
			Count_A <= Count_A + 1;

			
always @(posedge clock)
   if (reset)
	begin
	   enable_Dout <= 0;
	end
	else if (enable_A)
	begin
	   enable_Dout <= 1;
		case (Count_A)
			4'b0000: Dout_addr <= Dinit_addr ;	//000H
			4'b0001:if (enable_B) Dout_addr <= Dinit_addr + 12;//00CH
			4'b0010:if (enable_B) Dout_addr <= Dinit_addr + 96;//060H
			4'b0011:if (enable_B) Dout_addr <= Dinit_addr + 108;//06CH
			4'b0100:if (enable_B) Dout_addr <= Dinit_addr + 192;//0C0H
			4'b0101:if (enable_B) Dout_addr <= Dinit_addr + 204;//0CCH
			4'b0110:if (enable_B) Dout_addr <= Dinit_addr + 288;//120H
			4'b0111:if (enable_B) Dout_addr <= Dinit_addr + 300;//12CH
			4'b1000:if (enable_B) Dout_addr <= Dinit_addr + 384;//180H
			4'b1001:if (enable_B) Dout_addr <= Dinit_addr + 396;//18CH
			
			default:if (enable_B) Dout_addr <= Dinit_addr ;//??
		endcase
	end
	else
	begin		Dout_addr <=  0;
		enable_Dout <= 0;
	end
	
				
always @ (CS)
begin
	case(CS)
		S0:begin
			Qout=9'h000;	//0	
			Qscan=3'b000;	//Scan1 DATA 
			FSM_hold <= 0;
			NS=S1;
			end
		S1:begin
			Qout=9'h000;		
			Qscan=3'b001;	//Scan1 DATA
			FSM_hold <= 1;
			NS=S2;
			end
		S2:begin
			Qout=9'h020;	//32
			Qscan=3'b000;	//Scan2 DATA
			FSM_hold <= 0;
			NS=S3;
			end
		S3:begin
			Qout=9'h020;		
			Qscan=3'b010;	//Scan2 DATA
			FSM_hold <= 1;
			NS=S4;
			end	
		S4:begin
			Qout=9'h040;	//64	
			Qscan=3'b000;	//Scna3 DATA
			FSM_hold <= 0;
			NS=S5;
			end
		S5:begin
			Qout=9'h040;		
			Qscan=3'b100;	//Scna3 DATA
			FSM_hold <= 1;
			NS=S0;
			end		
		S6:begin
			Qout=9'h1D8;		//init 472
			Qscan=3'b000;	//Scna000 DATA
			FSM_hold <= 0;
			NS=S7;
			end	
		S7:begin
			Qout=9'h1E8;		//init 488
			Qscan=3'b000;	//Scna000 DATA
			FSM_hold <= 0;
			NS=S0;
			end	
			
	endcase
end

endmodule
