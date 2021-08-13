`timescale  100 ps / 10 ps
//wait for Enha
module OBUF8_HXILINX_SSP3 (O, I);
    

   output [7:0] O;

   input  [7:0] I;


assign O = I;

endmodule
`timescale 1ns / 1ps

module SSP3(clock, DVI_DE, DVI_HSYNC, DVI_ODCK, DVI_VSYNC, QE, reset, SW1, SW2, SW3, SW4, 
            AS1_CS, AS1_HSYNC, AS1_SCAN1, AS1_SCAN2, AS1_SCAN3, AS1_SCL, AS1_SDA, 
				AS2_CS, AS2_HSYNC, AS2_SCAN1, AS2_SCAN2, AS2_SCAN3, AS2_SCL, AS2_SDA, 
            AS3_CS, AS3_HSYNC, AS3_SCAN1, AS3_SCAN2, AS3_SCAN3, AS3_SCL, AS3_SDA, 
            AS4_CS, AS4_HSYNC, AS4_SCAN1, AS4_SCAN2, AS4_SCAN3, AS4_SCL, AS4_SDA, 
            AS5_CS, AS5_HSYNC, AS5_SCAN1, AS5_SCAN2, AS5_SCAN3, AS5_SCL, AS5_SDA, 
            AS6_CS, AS6_HSYNC, AS6_SCAN1, AS6_SCAN2, AS6_SCAN3, AS6_SCL, AS6_SDA, 
            AS7_CS, AS7_HSYNC, AS7_SCAN1, AS7_SCAN2, AS7_SCAN3, AS7_SCL, AS7_SDA, 
            AS8_CS, AS8_HSYNC, AS8_SCAN1, AS8_SCAN2, AS8_SCAN3, AS8_SCL, AS8_SDA, 
            AS9_CS, AS9_HSYNC, AS9_SCAN1, AS9_SCAN2, AS9_SCAN3, AS9_SCL, AS9_SDA, 
            AS10_CS, AS10_HSYNC, AS10_SCAN1, AS10_SCAN2, AS10_SCAN3, AS10_SCL, AS10_SDA, 
            hold, SG1, SG2, SG3, SG4, TP);

    input clock, reset, DVI_DE, DVI_HSYNC, DVI_ODCK, DVI_VSYNC;
    input [23:0] QE;
    input [7:0] SW1, SW2, SW3,SW4;
	 
   output AS1_CS, AS1_HSYNC, AS1_SCAN1, AS1_SCAN2, AS1_SCAN3, AS1_SCL, AS1_SDA;
   output AS2_CS, AS2_HSYNC, AS2_SCAN1, AS2_SCAN2, AS2_SCAN3, AS2_SCL, AS2_SDA;
   output AS3_CS, AS3_HSYNC, AS3_SCAN1, AS3_SCAN2, AS3_SCAN3, AS3_SCL, AS3_SDA;
   output AS4_CS, AS4_HSYNC, AS4_SCAN1, AS4_SCAN2, AS4_SCAN3, AS4_SCL, AS4_SDA;
   output AS5_CS, AS5_HSYNC, AS5_SCAN1, AS5_SCAN2, AS5_SCAN3, AS5_SCL, AS5_SDA;
   output AS6_CS, AS6_HSYNC, AS6_SCAN1, AS6_SCAN2, AS6_SCAN3, AS6_SCL, AS6_SDA;
   output AS7_CS, AS7_HSYNC, AS7_SCAN1, AS7_SCAN2, AS7_SCAN3, AS7_SCL, AS7_SDA;
   output AS8_CS, AS8_HSYNC, AS8_SCAN1, AS8_SCAN2, AS8_SCAN3, AS8_SCL, AS8_SDA;
   output AS9_CS, AS9_HSYNC, AS9_SCAN1, AS9_SCAN2, AS9_SCAN3, AS9_SCL, AS9_SDA;
   output AS10_CS, AS10_HSYNC, AS10_SCAN1, AS10_SCAN2, AS10_SCAN3, AS10_SCL, AS10_SDA;
   output hold;
   output [7:0] SG1, SG2, SG3, SG4;
   output [7:0] TP;
   
   wire [15:0] DATA;
   wire [8:0] Dout_addr;
   wire enable_I, enable_O;
   wire [7:0] I_dataA;
   wire [2:0] Scan;
   wire [8:0] W_addr;
   wire XLXN_27, XLXN_71, XLXN_72, XLXN_73, XLXN_74, XLXN_75, XLXN_76, XLXN_77, XLXN_78, XLXN_79, XLXN_80, XLXN_82, XLXN_93, XLXN_99;
   wire [7:0] XLXN_81;
   
   assign XLXN_81 = 8'h00;
	
   SPI_OUT10 XLXI_1 (.clock(clock), .DATAin(DATA[15:0]), .ENC(enable_O), .reset(XLXN_93), 
                     .AS1_CS(AS1_CS), .AS1_SCL(AS1_SCL), .AS1_SDA(AS1_SDA), 
                     .AS2_CS(AS2_CS), .AS2_SCL(AS2_SCL), .AS2_SDA(AS2_SDA), 
                     .AS3_CS(AS3_CS), .AS3_SCL(AS3_SCL), .AS3_SDA(AS3_SDA), 
                     .AS4_CS(AS4_CS), .AS4_SCL(AS4_SCL), .AS4_SDA(AS4_SDA), 
                     .AS5_CS(AS5_CS), .AS5_SCL(AS5_SCL), .AS5_SDA(AS5_SDA), 
                     .AS6_CS(AS6_CS), .AS6_SCL(AS6_SCL), .AS6_SDA(AS6_SDA), 
                     .AS7_CS(AS7_CS), .AS7_SCL(AS7_SCL), .AS7_SDA(AS7_SDA), 
                     .AS8_CS(AS8_CS), .AS8_SCL(AS8_SCL), .AS8_SDA(AS8_SDA), 
                     .AS9_CS(AS9_CS), .AS9_SCL(AS9_SCL), .AS9_SDA(AS9_SDA), 
                     .AS10_CS(AS10_CS), .AS10_SCL(AS10_SCL), .AS10_SDA(AS10_SDA));
							
   INV XLXI_161 (.I(Scan[0]), .O(AS2_SCAN3));
   INV XLXI_162 (.I(Scan[1]), .O(AS2_SCAN2));
   INV XLXI_163 (.I(Scan[2]), .O(AS2_SCAN1));
   INV XLXI_164 (.I(Scan[0]), .O(AS3_SCAN3));
   INV XLXI_165 (.I(Scan[1]), .O(AS3_SCAN2));
   INV XLXI_166 (.I(Scan[2]), .O(AS3_SCAN1));
   INV XLXI_167 (.I(Scan[0]), .O(AS4_SCAN3));
   INV XLXI_168 (.I(Scan[1]), .O(AS4_SCAN2));
   INV XLXI_169 (.I(Scan[2]), .O(AS4_SCAN1));
   INV XLXI_170 (.I(Scan[0]), .O(AS5_SCAN3));
   INV XLXI_171 (.I(Scan[1]), .O(AS5_SCAN2));
   INV XLXI_172 (.I(Scan[2]), .O(AS5_SCAN1));
   INV XLXI_248 (.I(Scan[0]), .O(AS6_SCAN1));
   INV XLXI_249 (.I(Scan[1]), .O(AS6_SCAN2));
   INV XLXI_250 (.I(Scan[2]), .O(AS6_SCAN3));
   INV XLXI_251 (.I(Scan[0]), .O(AS7_SCAN1));
   INV XLXI_252 (.I(Scan[1]), .O(AS7_SCAN2));
   INV XLXI_253 (.I(Scan[2]), .O(AS7_SCAN3));
   INV XLXI_265 (.I(Scan[2]), .O(AS8_SCAN3));
   INV XLXI_266 (.I(Scan[1]), .O(AS8_SCAN2));
   INV XLXI_267 (.I(Scan[0]), .O(AS8_SCAN1));	
   INV XLXI_257 (.I(Scan[0]), .O(AS9_SCAN1));
   INV XLXI_258 (.I(Scan[1]), .O(AS9_SCAN2));
   INV XLXI_259 (.I(Scan[2]), .O(AS9_SCAN3));
   INV XLXI_260 (.I(Scan[0]), .O(AS10_SCAN1));
   INV XLXI_261 (.I(Scan[1]), .O(AS10_SCAN2));
   INV XLXI_262 (.I(Scan[2]), .O(AS10_SCAN3));

	
   ROM8RAM8 XLXI_269 (.clock(clock), .clock_dvi(DVI_ODCK), 
                      .enable_I(enable_I), .I_dataA(I_dataA[7:0]), .I_dataO(XLXN_81[7:0]), .R_addr(Dout_addr[8:0]), 
                      .WEA(XLXN_99), .WEO(XLXN_82), 
                      .W_addr(W_addr[8:0]),.enable_O(enable_O), 
                      .O_dataA(DATA[7:0]), .O_dataO(DATA[15:8]));
							 
   INV XLXI_270 (.I(reset), .O(XLXN_93));
   INV XLXI_278 (.I(Scan[0]), .O(AS1_SCAN3));
   INV XLXI_279 (.I(Scan[1]), .O(AS1_SCAN2));
   INV XLXI_280 (.I(Scan[2]), .O(AS1_SCAN1));
   INV XLXI_285 (.I(XLXN_27), .O(XLXN_71));
   INV XLXI_287 (.I(XLXN_27), .O(XLXN_72));
   INV XLXI_288 (.I(XLXN_27), .O(XLXN_73));
   INV XLXI_289 (.I(XLXN_27), .O(XLXN_74));
   INV XLXI_290 (.I(XLXN_27), .O(XLXN_75));
   INV XLXI_291 (.I(XLXN_27), .O(XLXN_76));
   INV XLXI_292 (.I(XLXN_27), .O(XLXN_77));
   INV XLXI_293 (.I(XLXN_27), .O(XLXN_78));
   INV XLXI_294 (.I(XLXN_27), .O(XLXN_79));
   INV XLXI_295 (.I(XLXN_27), .O(XLXN_80));
   INV XLXI_315 (.I(XLXN_71), .O(AS1_HSYNC));
   INV XLXI_316 (.I(XLXN_72), .O(AS2_HSYNC));
   INV XLXI_317 (.I(XLXN_73), .O(AS3_HSYNC));
   INV XLXI_318 (.I(XLXN_74), .O(AS4_HSYNC));
   INV XLXI_319 (.I(XLXN_75), .O(AS5_HSYNC));
   INV XLXI_320 (.I(XLXN_76), .O(AS6_HSYNC));
   INV XLXI_321 (.I(XLXN_77), .O(AS7_HSYNC));
   INV XLXI_322 (.I(XLXN_78), .O(AS8_HSYNC));
   INV XLXI_323 (.I(XLXN_79), .O(AS9_HSYNC));
   INV XLXI_324 (.I(XLXN_80), .O(AS10_HSYNC));
   GND XLXI_326 (.G(XLXN_82));
	
   assemble XLXI_327 (.iODCK(DVI_ODCK), .iDE(DVI_DE), .iHSYNC(DVI_HSYNC), .iVSYNC(DVI_VSYNC), .iQE(QE[23:0]),
                    	 .iSW0(SW1[7]), .iSW1(SW1[1:0]), .iSW2(SW2[7:0]),
	                   .oWEA(XLXN_99), .oData(I_dataA[7:0]), .oAddress(W_addr[8:0]) );

   ttTP  DisTP(.iODCK(DVI_ODCK), .iRST(reset), .iSW({SW3[3:0],SW4[4:0]}), .iWEA(XLXN_99), .iData(I_dataA[7:0]), .iAddress(W_addr[8:0]), 
	            .oTP(TP[7:0]) );
                      
   OBUF8_HXILINX_SSP3 XLXI_329 (.I(SW4[7:0]), 
                                .O(SG4[7:0]));
   // synthesis attribute HU_SET of XLXI_329 is "XLXI_329_0"
   OBUF8_HXILINX_SSP3 XLXI_330 (.I(SW3[7:0]), 
                                .O(SG3[7:0]));
   // synthesis attribute HU_SET of XLXI_330 is "XLXI_330_1"
   OBUF8_HXILINX_SSP3 XLXI_331 (.I(SW2[7:0]), 
                                .O(SG2[7:0]));
   // synthesis attribute HU_SET of XLXI_331 is "XLXI_331_2"
   OBUF8_HXILINX_SSP3 XLXI_340 (.I(SW1[7:0]), 
                                .O(SG1[7:0]));
   // synthesis attribute HU_SET of XLXI_340 is "XLXI_340_3"
   FSM_DIVs XLXI_341 (.clock(clock), 
                      .reset(XLXN_93), 
                      .Dout_addr(Dout_addr[8:0]), 
                      .enable_Dout(enable_I), 
                      .FSM_hold(hold), 
                      .HSYNC(XLXN_27), 
                      .Qscan(Scan[2:0]));
endmodule