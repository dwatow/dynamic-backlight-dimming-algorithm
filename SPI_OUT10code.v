`timescale 1ns / 1ps

module SPI_OUT10(clock, DATAin, ENC, reset, 
                 AS1_CS, AS1_SCL, AS1_SDA, 
                 AS2_CS, AS2_SCL, AS2_SDA, 
                 AS3_CS, AS3_SCL, AS3_SDA, 
                 AS4_CS, AS4_SCL, AS4_SDA, 
                 AS5_CS, AS5_SCL, AS5_SDA, 
                 AS6_CS, AS6_SCL, AS6_SDA, 
                 AS7_CS, AS7_SCL, AS7_SDA, 
                 AS8_CS, AS8_SCL, AS8_SDA, 
                 AS9_CS, AS9_SCL, AS9_SDA, 
                 AS10_CS, AS10_SCL, AS10_SDA);

    input clock, ENC, reset;
    input [15:0] DATAin;
   output AS1_CS, AS1_SCL, AS1_SDA;
   output AS2_CS, AS2_SCL, AS2_SDA;
   output AS3_CS, AS3_SCL, AS3_SDA;
   output AS4_CS, AS4_SCL, AS4_SDA;
   output AS5_CS, AS5_SCL, AS5_SDA;
   output AS6_CS, AS6_SCL, AS6_SDA;
   output AS7_CS, AS7_SCL, AS7_SDA;
   output AS8_CS, AS8_SCL, AS8_SDA;
   output AS9_CS, AS9_SCL, AS9_SDA;
   output AS10_CS, AS10_SCL, AS10_SDA;
   
   wire cs_set;
   wire [15:0] Qout1, Qout2, Qout3, Qout4, Qout5, Qout6, Qout7, Qout8, Qout9, Qout10;
   wire [7:0] XLXN_308;
   
   assign XLXN_308 = 8'hFF;
   SPI_out XLXI_1 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout1[15:8]), .iClock(clock), .iData(Qout1[7:0]), .iReset(cs_set), .oCS(AS1_CS), .oSCLK(AS1_SCL), .oSDO(AS1_SDA));
   SPI_out XLXI_2 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout2[15:8]), .iClock(clock), .iData(Qout2[7:0]), .iReset(cs_set), .oCS(AS2_CS), .oSCLK(AS2_SCL), .oSDO(AS2_SDA));
   SPI_out XLXI_3 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout3[15:8]), .iClock(clock), .iData(Qout3[7:0]), .iReset(cs_set), .oCS(AS3_CS), .oSCLK(AS3_SCL), .oSDO(AS3_SDA));
   SPI_out XLXI_4 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout4[15:8]), .iClock(clock), .iData(Qout4[7:0]), .iReset(cs_set), .oCS(AS4_CS), .oSCLK(AS4_SCL), .oSDO(AS4_SDA));
   SPI_out XLXI_5 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout5[15:8]), .iClock(clock), .iData(Qout5[7:0]), .iReset(cs_set), .oCS(AS5_CS), .oSCLK(AS5_SCL), .oSDO(AS5_SDA));
   SPI_out XLXI_6 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout6[15:8]), .iClock(clock), .iData(Qout6[7:0]), .iReset(cs_set), .oCS(AS6_CS), .oSCLK(AS6_SCL), .oSDO(AS6_SDA));
   SPI_out XLXI_7 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout7[15:8]), .iClock(clock), .iData(Qout7[7:0]), .iReset(cs_set), .oCS(AS7_CS), .oSCLK(AS7_SCL), .oSDO(AS7_SDA));
   SPI_out XLXI_8 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout8[15:8]), .iClock(clock), .iData(Qout8[7:0]), .iReset(cs_set), .oCS(AS8_CS), .oSCLK(AS8_SCL), .oSDO(AS8_SDA));
   SPI_out XLXI_9 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout9[15:8]), .iClock(clock), .iData(Qout9[7:0]), .iReset(cs_set), .oCS(AS9_CS), .oSCLK(AS9_SCL), .oSDO(AS9_SDA));
   SPI_out XLXI_10 (.iAddr1(XLXN_308[7:0]), .iAddr2(Qout10[15:8]), .iClock(clock), .iData(Qout10[7:0]), .iReset(cs_set), .oCS(AS10_CS), .oSCLK(AS10_SCL), .oSDO(AS10_SDA));
   reg16_nbp10 XLXI_95 (.clock(clock), 
                        .Din(DATAin[15:0]), 
                        .EN_count(ENC), 
                        .reset(reset), 
                        .CS_set(cs_set), 
                        .Qout1(Qout1[15:0]), 
                        .Qout2(Qout2[15:0]), 
                        .Qout3(Qout3[15:0]), 
                        .Qout4(Qout4[15:0]), 
                        .Qout5(Qout5[15:0]), 
                        .Qout6(Qout6[15:0]), 
                        .Qout7(Qout7[15:0]), 
                        .Qout8(Qout8[15:0]), 
                        .Qout9(Qout9[15:0]), 
                        .Qout10(Qout10[15:0]));
endmodule
