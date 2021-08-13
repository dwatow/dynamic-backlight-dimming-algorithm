`timescale 1ns / 1ps
module InUnit3(iODCK, iDE, iHSYNC, iVSYNC, iQE, iDutySW016464, oH_Duty, oV_Duty, oOU_en, oALG_rst, oPixelData, oV_Address, oV_Block_Duty_Count);

    input iODCK;
    input iDE;
    input iHSYNC;
    input iVSYNC;
    input [23:0] iQE;
    input [ 1:0] iDutySW016464;
	 
	 
   output [23:0] oH_Duty;
   output [191:0] oPixelData;
   output [3:0] oV_Address;
   output oV_Duty;
	output oOU_en;
	output oALG_rst;
	output [ 6:0] oV_Block_Duty_Count;

   wire [23:0] tH_Duty;
   wire [191:0] tPixelData;
   wire [3:0] tV_Address;
   wire tV_Duty;
	wire tOU_en;
	wire tALG_rst; 
	wire [ 6:0] tV_Block_Duty_Count;
	
   wire [6:0] HBC;
   wire [11:0] VC;
   wire [7:0] oY;
   wire [11:0] HC;
   
   V_count VCo (.iHSYNC_clk(iHSYNC), 
                   .iVSYNC_rst(iVSYNC), 
                   .oV_Block_Duty_Count(tV_Block_Duty_Count[ 6:0]), 
                   .oV_Count(VC[11:0]));
   RGB_to_Y RGBY (.iDE(iDE), 
                    .iODCK(iODCK), 
                    .iQE(iQE[23:0]), 
                    .oDE_delay3(DE_delay3), 
                    .oY(oY[7:0]));
   H_Count HCo (.iDE_rst(iDE), 
                   .iODCK(iODCK), 
                   .oH_Block_Duty_Count(HBC[6:0]), 
                   .oH_Count(HC[11:0]));
   DE_hub HD (.iDE(DE_delay3), 
                   .iDutySW(iDutySW016464[1:0]), 
                   .iH_Block_Duty_Count(HBC[6:0]), 
                   .iH_Count(HC[11:0]), 
                   .iODCK(iODCK), 
                   .oH_Duty(tH_Duty[23:0]));
   V_Dutys VD (.iDE(DE_delay3), 
                    .iDutySW(iDutySW016464[1:0]), 
                    .iODCK(iODCK), 
                    .iVSYNC_rst(iVSYNC), 
                    .oV_Duty(tV_Duty));
   V_address VA (.iODCK(iODCK), 
                      .iVSYNC_Preframe_rst(iVSYNC), 
                      .iV_Count(VC[11:0]), 
                      .oV_Address(tV_Address[3:0]));
   PixelData PD (.iDE(DE_delay3), 
                      .iH_Count(HC[11:0]), 
                      .iODCK(iODCK), 
                      .iY(oY[7:0]), 
                      .oPixelData(tPixelData[191:0])
							 );
							 
	enOU_rstALG OU_ALG (.iODCK(iODCK), .iV_Duty(tV_Duty), .oOU_en(tOU_en), .oALG_rst(tALG_rst));

   InUnitBuff IUBuf(.iODCK(iODCK), .iRST(iVSYNC), .iH_Duty(tH_Duty), .iPixelData(tPixelData), .iV_Address(tV_Address), .iV_Duty(tV_Duty), .iOU_en(tOU_en), .iALG_rst(tALG_rst), .iV_Block_Duty_Count(tV_Block_Duty_Count), 
                                                  .oH_Duty(oH_Duty), .oPixelData(oPixelData), .oV_Address(oV_Address), .oV_Duty(oV_Duty), .oOU_en(oOU_en), .oALG_rst(oALG_rst), .oV_Block_Duty_Count(oV_Block_Duty_Count) );

	
endmodule
