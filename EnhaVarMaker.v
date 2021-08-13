//117.828MHz
//module Enha(iODCK, iRST, iAlpha, iV_Duty, iWEA, iPreLineSum, iV_Block_Duty_Count, iBlockData, oBpixel, oEnhaRate);
module EnhaVarMaker(iODCK, iRST, iV_Duty, iWEA, iPreLineSum, iV_Block_Duty_Count, iBlockData, oBpixel, oEnhaRate);

input			 iODCK;
input        iRST;
//input        iAlpha;
//Pre line
input			 iWEA;

input	[13:0] iPreLineSum;
input [ 6:0] iV_Block_Duty_Count;//ram write address
//Count 0-63 address

//Pre Block
input iV_Duty;
input [7:0] iBlockData;

//OutToEnha2
output [7:0] oBpixel;
output [1:0] oEnhaRate;
//reg    [2:0] oEnhaRate;
//output [7:0] oEnhaRate_B;
//wire [19:0] oVar;


reg [13:0]	PreLineSum[66:0];	//main memory 		//for test
//Block Size = 64x64
//iV_Block_Duty_Count = 0-63
//63=111111(6 bit)

reg [6:0] tV_BlockDutyCount;//Ram read address
//Count 0-63 address

reg [13:0]	tA,tB;
reg [19:0]	oVar;					//Answer
reg [13:0]  tVar;

wire SubSel;

assign oBpixel = iBlockData;
//assign oEnhaRate_B = 9'b100000000 - oEnhaRate;


initial $readmemh("Enha.mem", PreLineSum, 0, 66);

assign SubSel = ((iBlockData << 6) > PreLineSum[tV_BlockDutyCount]) ? 1'b1 : 1'b0;
//Max = (iBlockData * 64)              SubSel = 1
//Max = PreLineSum[tV_BlockDutyCount]  SubSel = 0

//assign oEnhaRate = oVar[19:18]*iAlpha;//8bit = 2 bit * 4 bit
////00000000000000000000
//100_0000_0000_0000_0000
//262144

assign oEnhaRate = oVar[19:18];

always@(posedge iODCK, negedge iRST)
begin
   if(!iRST)
	begin
		tV_BlockDutyCount <= 0;
		oVar              <= 0;
		tVar              <= 0;
		tA                <= 0;
		tB                <= 0;
//		oEnhaRate         <= 0;
	end
	else
   begin
	   if(iV_Duty)//Pre Block
		begin
         if(iWEA)//Pre Line
	         PreLineSum[iV_Block_Duty_Count] <= iPreLineSum;
		   
			tV_BlockDutyCount <= 0;//Pre Block
			oVar <= oVar;
			tVar <= 0;
			tA <= 0;
			tB <= 0;
		end
		else//Bre clk
		begin
		   if(tV_BlockDutyCount == 66)
			begin
			   tV_BlockDutyCount <= 66;
				tVar <= 0;
//				oVar <= oVar;
//            oEnhaRate <= oVar[19:18] * iAlpha;
//            oEnhaRate <= oVar[19:18] << 1;
			end
			else//(tV_BlockDutyCount != 63)
			begin
            tV_BlockDutyCount <= tV_BlockDutyCount + 1;
				tVar <= tA - tB;
			   oVar <= oVar + {6'b0, tVar};
         end
			//---------------------------------------------
			//t1
         if(SubSel)
			begin//1
			   tA <= iBlockData << 6;
            tB <= PreLineSum[tV_BlockDutyCount];
         end
			else
			begin//0
            tA <= PreLineSum[tV_BlockDutyCount];
            tB <= iBlockData << 6;
			end
	   end
   end
end
endmodule

