`timescale 1ns / 1ps
module GSNan(iODCK, iDE, iHSYNC, iVSYNC, iQE, iSW1pass0maker, oDE, oHSYNC, oVSYNC, oQE);
    input iODCK;
    input iDE;
    input iHSYNC;
    input iVSYNC;
    input [23:0] iQE;
    input iSW1pass0maker;
    
   output oDE;
   output oHSYNC;
   output oVSYNC;
	output [23:0] oQE;
   
   wire rst;
   
   GiveSingalNan GSN (.iODCK(iODCK), .reset(rst), .iDE(iDE), .iHSYNC(iHSYNC), .iVSYNC(iVSYNC),  .iQE(iQE[23:0]), .SW(iSW1pass0maker),
                                                  .oDE(oDE), .oHSYNC(oHSYNC), .oQE(oQE[23:0]), .oVSYNC(oVSYNC));
   GND gnd (.G(rst));
endmodule
