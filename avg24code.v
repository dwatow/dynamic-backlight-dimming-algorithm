`timescale 1ns / 1ps
module Average24s( iODCK, iRST, iSW, iH_Duty, iV_Duty, iPixelData, oBlockData, oLineSum, oWEA);

    input 			iODCK;
	 input			iRST;
    input [3:0] 	iSW;
	 input [23:0] 	iH_Duty;
    input 			iV_Duty;
    input [191:0] iPixelData;
   output [191:0] oBlockData;
	output [ 23:0] oWEA;
   output [335:0] oLineSum;

   Average algo_avg_00 (.iRST(iRST), .iH_Duty(iH_Duty[ 0]), .iODCK(iODCK), .iPixelData(iPixelData[  7:  0]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[  7:  0]), .oLineSum(oLineSum[ 13:  0]), .oEnEnha(oWEA[0]) );
   Average algo_avg_01 (.iRST(iRST), .iH_Duty(iH_Duty[ 1]), .iODCK(iODCK), .iPixelData(iPixelData[ 15:  8]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 15:  8]), .oLineSum(oLineSum[ 27: 14]), .oEnEnha(oWEA[1]) );
   Average algo_avg_02 (.iRST(iRST), .iH_Duty(iH_Duty[ 3]), .iODCK(iODCK), .iPixelData(iPixelData[ 31: 24]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 31: 24]), .oLineSum(oLineSum[ 41: 28]), .oEnEnha(oWEA[2]) );
   Average algo_avg_03 (.iRST(iRST), .iH_Duty(iH_Duty[ 2]), .iODCK(iODCK), .iPixelData(iPixelData[ 23: 16]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 23: 16]), .oLineSum(oLineSum[ 55: 42]), .oEnEnha(oWEA[3]) );
   Average algo_avg_04 (.iRST(iRST), .iH_Duty(iH_Duty[ 4]), .iODCK(iODCK), .iPixelData(iPixelData[ 39: 32]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 39: 32]), .oLineSum(oLineSum[ 69: 56]), .oEnEnha(oWEA[4]) );
   Average algo_avg_05 (.iRST(iRST), .iH_Duty(iH_Duty[ 5]), .iODCK(iODCK), .iPixelData(iPixelData[ 47: 40]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 47: 40]), .oLineSum(oLineSum[ 83: 70]), .oEnEnha(oWEA[5]) );
   Average algo_avg_06 (.iRST(iRST), .iH_Duty(iH_Duty[ 6]), .iODCK(iODCK), .iPixelData(iPixelData[ 55: 48]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 55: 48]), .oLineSum(oLineSum[ 97: 84]), .oEnEnha(oWEA[6]) ); 
   Average algo_avg_07 (.iRST(iRST), .iH_Duty(iH_Duty[ 7]), .iODCK(iODCK), .iPixelData(iPixelData[ 63: 56]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 63: 56]), .oLineSum(oLineSum[111: 98]), .oEnEnha(oWEA[7]) );
   Average algo_avg_08 (.iRST(iRST), .iH_Duty(iH_Duty[ 8]), .iODCK(iODCK), .iPixelData(iPixelData[ 71: 64]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 71: 64]), .oLineSum(oLineSum[125:112]), .oEnEnha(oWEA[8]) );
   Average algo_avg_09 (.iRST(iRST), .iH_Duty(iH_Duty[ 9]), .iODCK(iODCK), .iPixelData(iPixelData[ 79: 72]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 79: 72]), .oLineSum(oLineSum[139:126]), .oEnEnha(oWEA[9]) );
   Average algo_avg_10 (.iRST(iRST), .iH_Duty(iH_Duty[10]), .iODCK(iODCK), .iPixelData(iPixelData[ 87: 80]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 87: 80]), .oLineSum(oLineSum[153:140]), .oEnEnha(oWEA[10]) );
   Average algo_avg_11 (.iRST(iRST), .iH_Duty(iH_Duty[11]), .iODCK(iODCK), .iPixelData(iPixelData[ 95: 88]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[ 95: 88]), .oLineSum(oLineSum[167:154]), .oEnEnha(oWEA[11]) );
   Average algo_avg_12 (.iRST(iRST), .iH_Duty(iH_Duty[12]), .iODCK(iODCK), .iPixelData(iPixelData[103: 96]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[103: 96]), .oLineSum(oLineSum[181:168]), .oEnEnha(oWEA[12]) );
   Average algo_avg_13 (.iRST(iRST), .iH_Duty(iH_Duty[13]), .iODCK(iODCK), .iPixelData(iPixelData[111:104]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[111:104]), .oLineSum(oLineSum[195:182]), .oEnEnha(oWEA[13]) );
   Average algo_avg_14 (.iRST(iRST), .iH_Duty(iH_Duty[14]), .iODCK(iODCK), .iPixelData(iPixelData[119:112]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[119:112]), .oLineSum(oLineSum[209:196]), .oEnEnha(oWEA[14]) );
   Average algo_avg_15 (.iRST(iRST), .iH_Duty(iH_Duty[15]), .iODCK(iODCK), .iPixelData(iPixelData[127:120]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[127:120]), .oLineSum(oLineSum[223:210]), .oEnEnha(oWEA[15]) );
   Average algo_avg_16 (.iRST(iRST), .iH_Duty(iH_Duty[16]), .iODCK(iODCK), .iPixelData(iPixelData[135:128]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[135:128]), .oLineSum(oLineSum[237:224]), .oEnEnha(oWEA[16]) );
   Average algo_avg_17 (.iRST(iRST), .iH_Duty(iH_Duty[17]), .iODCK(iODCK), .iPixelData(iPixelData[143:136]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[143:136]), .oLineSum(oLineSum[251:238]), .oEnEnha(oWEA[17]) );
   Average algo_avg_18 (.iRST(iRST), .iH_Duty(iH_Duty[18]), .iODCK(iODCK), .iPixelData(iPixelData[151:144]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[151:144]), .oLineSum(oLineSum[265:252]), .oEnEnha(oWEA[18]) );
   Average algo_avg_19 (.iRST(iRST), .iH_Duty(iH_Duty[19]), .iODCK(iODCK), .iPixelData(iPixelData[159:152]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[159:152]), .oLineSum(oLineSum[279:266]), .oEnEnha(oWEA[19]) );
   Average algo_avg_20 (.iRST(iRST), .iH_Duty(iH_Duty[20]), .iODCK(iODCK), .iPixelData(iPixelData[167:160]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[167:160]), .oLineSum(oLineSum[293:280]), .oEnEnha(oWEA[20]) );
   Average algo_avg_21 (.iRST(iRST), .iH_Duty(iH_Duty[21]), .iODCK(iODCK), .iPixelData(iPixelData[175:168]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[175:168]), .oLineSum(oLineSum[307:294]), .oEnEnha(oWEA[21]) );
   Average algo_avg_22 (.iRST(iRST), .iH_Duty(iH_Duty[22]), .iODCK(iODCK), .iPixelData(iPixelData[183:176]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[183:176]), .oLineSum(oLineSum[321:308]), .oEnEnha(oWEA[22]) );
   Average algo_avg_23 (.iRST(iRST), .iH_Duty(iH_Duty[23]), .iODCK(iODCK), .iPixelData(iPixelData[191:184]), .iSw_0Max_1Avg(iSW[3:0]), .iV_Duty(iV_Duty), .oBlockData(oBlockData[191:184]), .oLineSum(oLineSum[335:322]), .oEnEnha(oWEA[23]) );
endmodule
