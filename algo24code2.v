`timescale 1ns / 1ps
//algorithm with Enha
//module algorithm24s(iODCK, iRST, iSW1, iSW2, iH_Duty, iV_Duty, iPixelData, oBlockData);
module algorithm24s(iODCK, iRST, iSW1, iSW2, iH_Duty, iV_Duty, iPixelData, iV_Block_Duty_Count, oBlockData);

    input         iODCK;
    input         iRST;
    //2bit sw for choose algorithm mode
    input [1:0]   iSW1;
    input [7:0]   iSW2;
    //4bit        average left shift bit
	 //7bit        bw define black value
    input [23:0]   iH_Duty;
    input          iV_Duty;
    input [191:0] iPixelData;
    input [6:0] iV_Block_Duty_Count;

   output [191:0] oBlockData;
	
   wire [335:0] oLineSum;
   wire [3:0] Mode;
	wire [191:0] ABlockData;
	wire [191:0] MBlockData;
	wire [191:0] WBlockData;
	wire [191:0] EBlockData;

   wire [23:0] WEA_AVG;

	ModeSelect        MS( .iSW(iSW1[1:0]), .iRST(iRST), .oMode(Mode[3:0]));
   max24s           M24( .iODCK(iODCK), .iRST(Mode[0]), .iH_Duty(iH_Duty[23:0]), .iV_Duty(iV_Duty), .iPixelData(iPixelData[191:0]), .oBlockData(MBlockData[191:0]));
   Average24s       A24( .iODCK(iODCK), .iRST(Mode[1]), .iH_Duty(iH_Duty[23:0]), .iV_Duty(iV_Duty), .iPixelData(iPixelData[191:0]), .oBlockData(ABlockData[191:0]), .oLineSum(oLineSum[335:0]), .iSW(iSW2[3:0]), .oWEA(WEA_AVG[23:0]) );
	WhiteAndBlack24s W24( .iODCK(iODCK), .iRST(Mode[2]), .iH_Duty(iH_Duty[23:0]), .iV_Duty(iV_Duty), .iPixelData(iPixelData[191:0]), .oBlockData(WBlockData[191:0]), .iSW(iSW2[7:0]) );
   EnhaMain24s      E24( .iODCK(iODCK), .iRST(Mode[3]),                          .iV_Duty(iV_Duty), .iBlockData(ABlockData[191:0]), .oBlockData(EBlockData[191:0]), 
	                                                     .iWEA(WEA_AVG[23:0]), .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), .iLineSum_AVG(oLineSum));
   BDSelect         BDS( .i0M1ASel(iSW1[1:0]), .AVG_Data(ABlockData[191:0]), .MAX_Data(MBlockData[191:0]), .WAB_Data(WBlockData[191:0]), .Enh_Data(EBlockData[191:0]), .oBlockData(oBlockData[191:0]));

endmodule
