`timescale 1ns / 1ps
module WhiteAndBlack24s( iODCK, iRST, iSW, iH_Duty, iV_Duty, iPixelData, oBlockData);

    input 			iODCK;
	 input			iRST;
    input [7:0] 	iSW;
	 input [23:0] 	iH_Duty;
    input 			iV_Duty;
    input [191:0] iPixelData;
   output [191:0] oBlockData;

   WhiteAndBlack algo_wb_00 (.iRST(iRST), .iH_Duty(iH_Duty[ 0]), .iODCK(iODCK), .iPixelData(iPixelData[  7:  0]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[  7:  0]));
   WhiteAndBlack algo_wb_01 (.iRST(iRST), .iH_Duty(iH_Duty[ 1]), .iODCK(iODCK), .iPixelData(iPixelData[ 15:  8]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 15:  8]));
   WhiteAndBlack algo_wb_02 (.iRST(iRST), .iH_Duty(iH_Duty[ 3]), .iODCK(iODCK), .iPixelData(iPixelData[ 31: 24]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 31: 24]));
   WhiteAndBlack algo_wb_03 (.iRST(iRST), .iH_Duty(iH_Duty[ 2]), .iODCK(iODCK), .iPixelData(iPixelData[ 23: 16]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 23: 16]));
   WhiteAndBlack algo_wb_04 (.iRST(iRST), .iH_Duty(iH_Duty[ 4]), .iODCK(iODCK), .iPixelData(iPixelData[ 39: 32]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 39: 32]));
   WhiteAndBlack algo_wb_05 (.iRST(iRST), .iH_Duty(iH_Duty[ 5]), .iODCK(iODCK), .iPixelData(iPixelData[ 47: 40]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 47: 40]));
   WhiteAndBlack algo_wb_06 (.iRST(iRST), .iH_Duty(iH_Duty[ 6]), .iODCK(iODCK), .iPixelData(iPixelData[ 55: 48]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 55: 48])); 
   WhiteAndBlack algo_wb_07 (.iRST(iRST), .iH_Duty(iH_Duty[ 7]), .iODCK(iODCK), .iPixelData(iPixelData[ 63: 56]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 63: 56]));
   WhiteAndBlack algo_wb_08 (.iRST(iRST), .iH_Duty(iH_Duty[ 8]), .iODCK(iODCK), .iPixelData(iPixelData[ 71: 64]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 71: 64]));
   WhiteAndBlack algo_wb_09 (.iRST(iRST), .iH_Duty(iH_Duty[ 9]), .iODCK(iODCK), .iPixelData(iPixelData[ 79: 72]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 79: 72]));
   WhiteAndBlack algo_wb_10 (.iRST(iRST), .iH_Duty(iH_Duty[10]), .iODCK(iODCK), .iPixelData(iPixelData[ 87: 80]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 87: 80]));
   WhiteAndBlack algo_wb_11 (.iRST(iRST), .iH_Duty(iH_Duty[11]), .iODCK(iODCK), .iPixelData(iPixelData[ 95: 88]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 95: 88]));
   WhiteAndBlack algo_wb_12 (.iRST(iRST), .iH_Duty(iH_Duty[12]), .iODCK(iODCK), .iPixelData(iPixelData[103: 96]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[103: 96]));
   WhiteAndBlack algo_wb_13 (.iRST(iRST), .iH_Duty(iH_Duty[13]), .iODCK(iODCK), .iPixelData(iPixelData[111:104]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[111:104]));
   WhiteAndBlack algo_wb_14 (.iRST(iRST), .iH_Duty(iH_Duty[14]), .iODCK(iODCK), .iPixelData(iPixelData[119:112]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[119:112]));
   WhiteAndBlack algo_wb_15 (.iRST(iRST), .iH_Duty(iH_Duty[15]), .iODCK(iODCK), .iPixelData(iPixelData[127:120]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[127:120]));
   WhiteAndBlack algo_wb_16 (.iRST(iRST), .iH_Duty(iH_Duty[16]), .iODCK(iODCK), .iPixelData(iPixelData[135:128]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[135:128]));
   WhiteAndBlack algo_wb_17 (.iRST(iRST), .iH_Duty(iH_Duty[17]), .iODCK(iODCK), .iPixelData(iPixelData[143:136]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[143:136]));
   WhiteAndBlack algo_wb_18 (.iRST(iRST), .iH_Duty(iH_Duty[18]), .iODCK(iODCK), .iPixelData(iPixelData[151:144]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[151:144]));
   WhiteAndBlack algo_wb_19 (.iRST(iRST), .iH_Duty(iH_Duty[19]), .iODCK(iODCK), .iPixelData(iPixelData[159:152]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[159:152]));
   WhiteAndBlack algo_wb_20 (.iRST(iRST), .iH_Duty(iH_Duty[20]), .iODCK(iODCK), .iPixelData(iPixelData[167:160]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[167:160]));
   WhiteAndBlack algo_wb_21 (.iRST(iRST), .iH_Duty(iH_Duty[21]), .iODCK(iODCK), .iPixelData(iPixelData[175:168]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[175:168]));
   WhiteAndBlack algo_wb_22 (.iRST(iRST), .iH_Duty(iH_Duty[22]), .iODCK(iODCK), .iPixelData(iPixelData[183:176]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[183:176]));
   WhiteAndBlack algo_wb_23 (.iRST(iRST), .iH_Duty(iH_Duty[23]), .iODCK(iODCK), .iPixelData(iPixelData[191:184]), .iSWthreshold(iSW[7:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[191:184]));
endmodule
