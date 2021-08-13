//503.525MHz
module PixelData(
		input 			iODCK,
//		input 			iRstPreline,
		input 			iDE,
		input [ 7:0]	iY,
		input [11:0]	iH_Count,
//		input [ 6:0]	iH_Block_Duty_Count,
//		input				iDutySW,
		
		output reg [191:0] oPixelData
//		output reg [23:0] oH_Duty
    );


parameter
S0		=	5'b00000,
H0		=	5'b00001,
H1		=	5'b00010,
H2		=	5'b00011,
H3		=	5'b00100,
H4		=	5'b00101,
H5		=	5'b00110,
H6		=	5'b00111,
H7		=	5'b01000,
H8		=	5'b01001,
H9		=	5'b01010,
H10	=	5'b01011,
H11	=	5'b01100,
H12	=	5'b01101,
H13	=	5'b01110,
H14	=	5'b01111,
H15	=	5'b10000,
H16	=	5'b10001,
H17	=	5'b10010,
H18	=	5'b10011,
H19	=	5'b10100,
H20	=	5'b10101,
H21	=	5'b10110,
H22	=	5'b10111,
H23	=	5'b11000;

reg [4:0] CS,NS;

//wire [ 6: 0]	H_Block_Duty_pre_pixel;

//assign H_Block_Duty_pre_pixel = iDutySW ? 63 : 79;

always@(posedge iODCK,negedge iDE)
begin
	if(!iDE)
	begin
		CS <= S0;
	end
	else
	begin
		CS <= NS;
	end
end

//===============================================================
//===============================================================

always@(CS, iH_Count, iDE, iY)
begin
	case(CS)
	S0:
		begin
			oPixelData 	= 192'b0;
			NS	=	(iDE)	?	H0	:	S0;
		end
	H0:
		begin
								  // 00 01 02 03 04 05 06 07  08 09 10 11 12 13 14 15 16 17 18 19 20 21 22  23
			oPixelData	=	{184'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY};
			NS	=	(iH_Count	>=	12'd0 && iH_Count	<	12'd80 -1)	?	H0	:	H1;
		end
	H1:
		begin
								  // 00 01 02 03 04 05 06 07  08 09 10 11 12 13 14 15 16 17 18 19 20 21  22     23
			oPixelData	=	{176'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 8'h00};
			NS	=	(iH_Count	>=	12'd80 && iH_Count	<	12'd160 -1)	?	H1	:	H2;
		end
	H2:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20  21      22 23
			oPixelData	=	{168'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 16'h00_00};
			NS	=	(iH_Count	>=	12'd160 && iH_Count	<	12'd240 -1)	?	H2	:	H3;
		end
	H3:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19  20      21 22 23
			oPixelData	=	{160'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 24'h00_00_00};
			NS	=	(iH_Count	>=	12'd240 && iH_Count	<	12'd320 -1)	?	H3	:	H4;
		end
	H4:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18  19      20 21 22 23
			oPixelData	=	{152'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 32'h00_00_00_00};
			NS	=	(iH_Count	>=	12'd320 && iH_Count	<	12'd400 -1)	?	H4	:	H5;
		end
	H5:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17  18      19 20 21 22 23
			oPixelData	=	{144'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 40'h00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd400 && iH_Count	<	12'd480 -1)	?	H5	:	H6;
		end
	H6:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16  17      18 19 20 21 22 23
			oPixelData	=	{136'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 48'h00_00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd480 && iH_Count	<	12'd560 -1)	?	H6	:	H7;
		end
	H7:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15  16      17 18 19 20 21 22 23
			oPixelData	=	{128'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 56'h00_00_00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd560 && iH_Count	<	12'd640 -1)	?	H7	:	H8;
		end
	H8:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14  15      16 17 18 19 20 21 22 23
			oPixelData	=	{120'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 64'h00_00_00_00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd640 && iH_Count	<	12'd720 -1)	?	H8	:	H9;
		end
	H9:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12 13  14      15 16 17 18 19 20 21 22 23
			oPixelData	=	{112'h00_00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 72'h00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd720 && iH_Count	<	12'd800 -1)	?	H9	:	H10;
		end
	H10:
		begin
								   // 00 01 02 03 04 05 06 07 08 09 10 11 12  13      14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{104'h00_00_00_00_00_00_00_00_00_00_00_00_00, iY, 80'h00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd800 && iH_Count	<	12'd880 -1)	?	H10	:	H11;
		end
	H11:
		begin
								  // 00 01 02 03 04 05 06 07 08 09 10 11  12      13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{96'h00_00_00_00_00_00_00_00_00_00_00_00, iY, 88'h00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count	>=	12'd  880 && iH_Count < 12'd960 -1)	?	H11	:	H12;
		end
	H12:
		begin
								  // 00 01 02 03 04 05 06 07 08 09 10  11      12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{88'h00_00_00_00_00_00_00_00_00_00_00, iY, 96'h00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd960 && iH_Count <  12'd1040 -1)	?	H12	:	H13;
		end
	H13:
		begin
								  // 00 01 02 03 04 05 06 07 08 09  10       11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{80'h00_00_00_00_00_00_00_00_00_00, iY, 104'h00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1040 && iH_Count <  12'd1120 -1)	?	H13	:	H14;
		end
	H14:
		begin
								  // 00 01 02 03 04 05 06 07 08  09      10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{72'h00_00_00_00_00_00_00_00_00, iY, 112'h00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1120 && iH_Count <  12'd1200 -1)	?	H14	:	H15;
		end
	H15:
		begin
								  // 00 01 02 03 04 05 06 07  08       09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{64'h00_00_00_00_00_00_00_00, iY, 120'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1200 && iH_Count <  12'd1280 -1)	?	H15	:	H16;
		end
	H16:
		begin
								  // 00 01 02 03 04 05 06  07       08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{56'h00_00_00_00_00_00_00, iY, 128'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1280 && iH_Count <  12'd1360 -1)	?	H16	:	H17;
		end
	H17:
		begin
								  // 00 01 02 03 04 05  06       07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{48'h00_00_00_00_00_00, iY, 136'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1360 && iH_Count <  12'd1440 -1)	?	H17	:	H18;
		end
	H18:
		begin
								  // 00 01 02 03 04  05       06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{40'h00_00_00_00_00, iY, 144'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1440 && iH_Count <  12'd1520 -1)	?	H18	:	H19;
		end
	H19:
		begin
								  // 00 01 02 03  04       05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{32'h00_00_00_00, iY, 152'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1520 && iH_Count <  12'd1600 -1)	?	H19	:	H20;
		end
	H20:
		begin
								  // 00 01 02  03       04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{24'h00_00_00, iY, 160'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1600 && iH_Count <  12'd1680 -1)	?	H20	:	H21;
		end
	H21:
		begin
								  // 00 01  02       03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{16'h00_00, iY, 168'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1680 && iH_Count <  12'd1760 -1)	?	H21	:	H22;
		end
	H22:
		begin
								// 00   01       02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{8'h00, iY, 176'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1760 && iH_Count <  12'd1840 -1)	?	H22	:	H23;
		end
	H23:
		begin
						    // 00       01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23
			oPixelData	=	{iY, 184'h00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00};
			NS	=	(iH_Count>=  12'd1840 && iH_Count <  12'd1920 -1)	?	H23	:	S0;
		end
//	default:
//		begin
//			oPixelData 	= 192'b0;
//			NS	=	S0;
//		end
	endcase
end
endmodule
