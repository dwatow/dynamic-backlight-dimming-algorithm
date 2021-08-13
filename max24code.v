`timescale 1ns / 1ps
module max24s( iODCK, iRST, iH_Duty, iV_Duty, iPixelData, oBlockData);

input          iODCK;
input		      iRST;
input  [ 23:0] iH_Duty;
input          iV_Duty;
input  [191:0] iPixelData;
output [191:0] oBlockData;

   max algo_max_00 (.iRST(iRST), .iH_Duty(iH_Duty[ 0]), .iODCK(iODCK), .iPixelData(iPixelData[  7:  0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[  7:  0]));
   max algo_max_01 (.iRST(iRST), .iH_Duty(iH_Duty[ 1]), .iODCK(iODCK), .iPixelData(iPixelData[ 15:  8]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 15:  8]));
   max algo_max_02 (.iRST(iRST), .iH_Duty(iH_Duty[ 3]), .iODCK(iODCK), .iPixelData(iPixelData[ 31: 24]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 31: 24]));
   max algo_max_03 (.iRST(iRST), .iH_Duty(iH_Duty[ 2]), .iODCK(iODCK), .iPixelData(iPixelData[ 23: 16]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 23: 16]));
   max algo_max_04 (.iRST(iRST), .iH_Duty(iH_Duty[ 4]), .iODCK(iODCK), .iPixelData(iPixelData[ 39: 32]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 39: 32]));
   max algo_max_05 (.iRST(iRST), .iH_Duty(iH_Duty[ 5]), .iODCK(iODCK), .iPixelData(iPixelData[ 47: 40]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 47: 40]));
   max algo_max_06 (.iRST(iRST), .iH_Duty(iH_Duty[ 6]), .iODCK(iODCK), .iPixelData(iPixelData[ 55: 48]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 55: 48])); 
   max algo_max_07 (.iRST(iRST), .iH_Duty(iH_Duty[ 7]), .iODCK(iODCK), .iPixelData(iPixelData[ 63: 56]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 63: 56]));
   max algo_max_08 (.iRST(iRST), .iH_Duty(iH_Duty[ 8]), .iODCK(iODCK), .iPixelData(iPixelData[ 71: 64]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 71: 64]));
   max algo_max_09 (.iRST(iRST), .iH_Duty(iH_Duty[ 9]), .iODCK(iODCK), .iPixelData(iPixelData[ 79: 72]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 79: 72]));
   max algo_max_10 (.iRST(iRST), .iH_Duty(iH_Duty[10]), .iODCK(iODCK), .iPixelData(iPixelData[ 87: 80]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 87: 80]));
   max algo_max_11 (.iRST(iRST), .iH_Duty(iH_Duty[11]), .iODCK(iODCK), .iPixelData(iPixelData[ 95: 88]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 95: 88]));
   max algo_max_12 (.iRST(iRST), .iH_Duty(iH_Duty[12]), .iODCK(iODCK), .iPixelData(iPixelData[103: 96]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[103: 96]));
   max algo_max_13 (.iRST(iRST), .iH_Duty(iH_Duty[13]), .iODCK(iODCK), .iPixelData(iPixelData[111:104]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[111:104]));
   max algo_max_14 (.iRST(iRST), .iH_Duty(iH_Duty[14]), .iODCK(iODCK), .iPixelData(iPixelData[119:112]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[119:112]));
   max algo_max_15 (.iRST(iRST), .iH_Duty(iH_Duty[15]), .iODCK(iODCK), .iPixelData(iPixelData[127:120]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[127:120]));
   max algo_max_16 (.iRST(iRST), .iH_Duty(iH_Duty[16]), .iODCK(iODCK), .iPixelData(iPixelData[135:128]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[135:128]));
   max algo_max_17 (.iRST(iRST), .iH_Duty(iH_Duty[17]), .iODCK(iODCK), .iPixelData(iPixelData[143:136]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[143:136]));
   max algo_max_18 (.iRST(iRST), .iH_Duty(iH_Duty[18]), .iODCK(iODCK), .iPixelData(iPixelData[151:144]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[151:144]));
   max algo_max_19 (.iRST(iRST), .iH_Duty(iH_Duty[19]), .iODCK(iODCK), .iPixelData(iPixelData[159:152]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[159:152]));
   max algo_max_20 (.iRST(iRST), .iH_Duty(iH_Duty[20]), .iODCK(iODCK), .iPixelData(iPixelData[167:160]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[167:160]));
   max algo_max_21 (.iRST(iRST), .iH_Duty(iH_Duty[21]), .iODCK(iODCK), .iPixelData(iPixelData[175:168]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[175:168]));
   max algo_max_22 (.iRST(iRST), .iH_Duty(iH_Duty[22]), .iODCK(iODCK), .iPixelData(iPixelData[183:176]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[183:176]));
   max algo_max_23 (.iRST(iRST), .iH_Duty(iH_Duty[23]), .iODCK(iODCK), .iPixelData(iPixelData[191:184]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[191:184]));

endmodule
