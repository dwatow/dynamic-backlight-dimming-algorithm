`timescale 1ns / 1ps
module ModeSelect(iSW, iRST, oMode);

input [1:0] iSW;
input iRST;
output [3:0] oMode;

wire [3:0] Select;

assign Select = (iSW == 2'b00) ? 4'b0001 : //MAX
                (iSW == 2'b01) ? 4'b0010 : //AVG
                (iSW == 2'b10) ? 4'b0100 : //WB
					                  4'b1010 ; //AVG+Enha
									  
assign oMode[0] = Select[0] & iRST;//MAX
assign oMode[1] = Select[1] & iRST;//AVG
assign oMode[2] = Select[2] & iRST;//WB
assign oMode[3] = Select[3] & iRST;//AVG+Enha

endmodule
