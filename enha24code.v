`timescale 1ns / 1ps

module EnhaMain24s(iODCK, iRST, iV_Duty, iBlockData, oBlockData, iWEA, iV_Block_Duty_Count, iLineSum_AVG);

    input        iODCK;
	 input		  iRST;
    input        iV_Duty;
    input [191:0] iBlockData;
    
	 input [ 23:0] iWEA;
    input [  6:0] iV_Block_Duty_Count;
    input [335:0] iLineSum_AVG;
	
    output [191:0] oBlockData;


	EnhaMain algo_Enha_00 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 0]), .iLineSum_AVG(iLineSum_AVG[ 13:  0]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[  7:  0]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[  7:  0]));
   EnhaMain algo_Enha_01 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 1]), .iLineSum_AVG(iLineSum_AVG[ 27: 14]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 15:  8]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 15:  8]));
   EnhaMain algo_Enha_02 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 2]), .iLineSum_AVG(iLineSum_AVG[ 41: 28]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 31: 24]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 31: 24]));
   EnhaMain algo_Enha_03 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 3]), .iLineSum_AVG(iLineSum_AVG[ 55: 42]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 23: 16]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 23: 16]));
   EnhaMain algo_Enha_04 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 4]), .iLineSum_AVG(iLineSum_AVG[ 69: 56]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 39: 32]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 39: 32]));
   EnhaMain algo_Enha_05 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 5]), .iLineSum_AVG(iLineSum_AVG[ 83: 70]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 47: 40]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 47: 40]));
   EnhaMain algo_Enha_06 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 6]), .iLineSum_AVG(iLineSum_AVG[ 97: 84]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 55: 48]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 55: 48])); 
   EnhaMain algo_Enha_07 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 7]), .iLineSum_AVG(iLineSum_AVG[111: 98]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 63: 56]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 63: 56]));
   EnhaMain algo_Enha_08 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 8]), .iLineSum_AVG(iLineSum_AVG[125:112]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 71: 64]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 71: 64]));
   EnhaMain algo_Enha_09 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[ 9]), .iLineSum_AVG(iLineSum_AVG[139:126]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 79: 72]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 79: 72]));
   EnhaMain algo_Enha_10 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[10]), .iLineSum_AVG(iLineSum_AVG[153:140]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 87: 80]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 87: 80]));
   EnhaMain algo_Enha_11 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[11]), .iLineSum_AVG(iLineSum_AVG[167:154]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[ 95: 88]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[ 95: 88]));
   EnhaMain algo_Enha_12 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[12]), .iLineSum_AVG(iLineSum_AVG[181:168]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[103: 96]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[103: 96]));
   EnhaMain algo_Enha_13 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[13]), .iLineSum_AVG(iLineSum_AVG[195:182]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[111:104]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[111:104]));
   EnhaMain algo_Enha_14 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[14]), .iLineSum_AVG(iLineSum_AVG[209:196]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[119:112]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[119:112]));
   EnhaMain algo_Enha_15 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[15]), .iLineSum_AVG(iLineSum_AVG[223:210]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[127:120]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[127:120]));
   EnhaMain algo_Enha_16 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[16]), .iLineSum_AVG(iLineSum_AVG[237:224]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[135:128]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[135:128]));
   EnhaMain algo_Enha_17 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[17]), .iLineSum_AVG(iLineSum_AVG[251:238]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[143:136]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[143:136]));
   EnhaMain algo_Enha_18 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[18]), .iLineSum_AVG(iLineSum_AVG[265:252]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[151:144]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[151:144]));
   EnhaMain algo_Enha_19 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[19]), .iLineSum_AVG(iLineSum_AVG[279:266]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[159:152]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[159:152]));
   EnhaMain algo_Enha_20 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[20]), .iLineSum_AVG(iLineSum_AVG[293:280]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[167:160]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[167:160]));
   EnhaMain algo_Enha_21 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[21]), .iLineSum_AVG(iLineSum_AVG[307:294]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[175:168]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[175:168]));
   EnhaMain algo_Enha_22 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[22]), .iLineSum_AVG(iLineSum_AVG[321:308]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[183:176]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[183:176]));
   EnhaMain algo_Enha_23 (.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA[23]), .iLineSum_AVG(iLineSum_AVG[335:322]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iBlockData(iBlockData[191:184]), .iV_Duty(iV_Duty), .oBlockData_En(oBlockData[191:184]));

endmodule
