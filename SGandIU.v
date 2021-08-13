`timescale 1ns / 1ps
//module sat05282129(iODCK, iDE, iHSYNC, iVSYNC, iQE, iSW1, iSW2, oWEA, oData, oAddress,PDCS,PDNS,DECS,DENS);
//module sun05300322(iODCK, iDE, iHSYNC, iVSYNC, iQE, iSW1, iSW2, PixelDataCS,PixelDataNS,PixelData_IU,
module sun05302132(iODCK, iDE, iHSYNC, iVSYNC, iQE, iSW0, iSW1,VD_IU,HD_IU,VA_IU,PixelData_IU,rstALG_IU,enOU_IU);
//                          PixelDataCS,PixelDataNS,H_BlockCount,H_Count
    //DVI Signal
	 input iODCK;
    input iDE;
    input iHSYNC;
    input iVSYNC;
    input [23:0] iQE;
	 
	 //NKFUST Board
    input       iSW0;//input sw
    input [1:0] iSW1;//mode sw


//	output [24:0] PixelDataCS,PixelDataNS;
//	output [4:0] DE_hubCS,DE_hubNS;
	
//Format "Signal Name"+"_"+"Come From Block"
   output         VD_IU;
   output [23:0]  HD_IU;
   output [191:0] PixelData_IU;
   wire           VSYNC_GS;
   wire           HSYNC_GS;
   wire           DE_GS;
   wire   [23:0]  QE_GS;
   output [3:0]   VA_IU;
   output         rstALG_IU;
   output         enOU_IU;
	
	GSNan     GS (.iODCK(iODCK), .iDE(iDE), .iHSYNC(iHSYNC), .iVSYNC(iVSYNC), .iQE(iQE[23:0]), .iSW1pass0maker(iSW0),
//	GiveSingal GS (.iODCK(iODCK), .iDE(iDE), .iHSYNC(iHSYNC), .iVSYNC(iVSYNC), .iQE(iQE[23:0]), .iSW1pass0nothing(iSW0), 
                              .oDE(DE_GS), .oHSYNC(HSYNC_GS), .oVSYNC(VSYNC_GS), .oQE(QE_GS[23:0]));

   InUnit3 IU (.iODCK(iODCK), .iDE(DE_GS), .iHSYNC(HSYNC_GS), .iVSYNC(VSYNC_GS), .iQE(QE_GS[23:0]), .iDutySW016464(iSW1[1:0]),
                   .oH_Duty(HD_IU[23:0]), .oV_Duty(VD_IU), .oPixelData(PixelData_IU[191:0]), .oV_Address(VA_IU[3:0]), 
						 .oOU_en(enOU_IU), .oALG_rst(rstALG_IU));






endmodule
