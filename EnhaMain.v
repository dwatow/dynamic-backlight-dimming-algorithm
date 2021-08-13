`timescale 1ns / 1ps
//module AVGEE(iODCK, iRST, iSW_Alpha, iPixelData, iH_Duty, iV_Block_Duty_Count, iSw_0Max_1Avg, oBlockData_AVG, oBlockData_En);
module EnhaMain(iODCK, iRST, iV_Duty, iV_Block_Duty_Count, iWEA, iBlockData, iLineSum_AVG, oBlockData_En);

   input       iODCK;
   input       iRST;
//	input       iSW_Alpha;
//   input [7:0] iPixelData;
//   input       iH_Duty;
   input       iV_Duty;
//   input [5:0] iSw_0Max_1Avg;
	
	input [ 6:0] iV_Block_Duty_Count;

   input [7:0] iBlockData;
//   output [7:0] oBlockData_AVG;
   output [7:0] oBlockData_En;
//	output [19:0] oVar;


input iWEA;
//input [7:0] iBlockData;
input [13:0] iLineSum_AVG;

wire tWEA_Buff;
wire [7:0] tBlockData_Buff;	
wire [13:0] tLineSum_Buff;

wire [7:0] Bpixel;
wire [1:0] N;
//wire [7:0] oN_b;

//rst - Pre Block
//Average  U1(.iODCK(iODCK), .iRST(iRST), .iPixelData(iPixelData), 
//                                        .iH_Duty(iH_Duty), 
//                                        .iV_Duty(iV_Duty), 
//													 .iSw_0Max_1Avg(iSw_0Max_1Avg[5:0]),//shift bit
//													 .oBlockData(oBlockData_AVG[7:0]), 
//													 .oLineSum(LineSum_AVG[13:0]), 
//													 .oEnEnha(WEA_AVG)
//													 );

//rst - Pre Block
Avg_to_Enha_Buff  UB(.iODCK(iODCK), .iRST(iRST), .iWEA(iWEA),   .iLineSum(iLineSum_AVG[13:0]), .iBlockData(iBlockData[7:0]), 
								                         .oWEA(tWEA_Buff), .oLineSum(tLineSum_Buff),     .oBlockData(tBlockData_Buff[7:0]));

//rst - Pre Block
EnhaVarMaker     U2(.iODCK(iODCK), .iRST(iRST), .iV_Duty(iV_Duty), 
//                                        .iAlpha(iSW_Alpha),
													 .iWEA(tWEA_Buff), 
                                        .iBlockData(tBlockData_Buff[7:0]), 
                                        .iPreLineSum(tLineSum_Buff[13:0]), 
													 .iV_Block_Duty_Count(iV_Block_Duty_Count[6:0]), 
//													 .oBlockData(oBlockData_En[7:0]),
													 .oBpixel(Bpixel[7:0]),
													 .oEnhaRate(N[1:0])
//													 .oN_B(oN_b[7:0])
													 );
													 
EnhaSel   US(.iBpixel(Bpixel[7:0]), .iEnhaRate(N[1:0]), .oBlockData(oBlockData_En) );													 

endmodule
