`timescale 1ns / 1ps
module BDSelect(i0M1ASel, AVG_Data, MAX_Data, WAB_Data, Enh_Data, oBlockData);

input [1:0]i0M1ASel;
input [191:0] AVG_Data;
input [191:0] MAX_Data;
input [191:0] WAB_Data;
input [191:0] Enh_Data;
output [191:0] oBlockData;


assign oBlockData = (i0M1ASel == 2'b00) ? MAX_Data :
                    (i0M1ASel == 2'b01) ? AVG_Data :
                    (i0M1ASel == 2'b10) ? WAB_Data :
						                        Enh_Data ;

endmodule
