//360.231MHz
module DE_hub(iODCK, iDE, iH_Count, iH_Block_Duty_Count, iDutySW, oH_Duty);

input        iODCK;
input        iDE;
input [11:0] iH_Count;
input [ 6:0] iH_Block_Duty_Count;
input [ 1:0] iDutySW;

output [23:0] oH_Duty;
reg    [23:0] oH_Duty;

wire [ 6: 0] H_Block_Duty_pre_pixel;

assign H_Block_Duty_pre_pixel = (iDutySW == 2'b01) ? 64 : 79;

parameter [4:0]
S0     =    5'b00000,
H00    =    5'b00001,
H01    =    5'b00010,
H02    =    5'b00011,
H03    =    5'b00100,
H04    =    5'b00101,
H05    =    5'b00110,
H06    =    5'b00111,
H07    =    5'b01000,
H08    =    5'b01001,
H09    =    5'b01010,
H10    =    5'b01011,
H11    =    5'b01100,
H12    =    5'b01101,
H13    =    5'b01110,
H14    =    5'b01111,
H15    =    5'b10000,
H16    =    5'b10001,
H17    =    5'b10010,
H18    =    5'b10011,
H19    =    5'b10100,
H20    =    5'b10101,
H21    =    5'b10110,
H22    =    5'b10111,
H23    =    5'b11000;

reg [4:0] CS,NS;

wire outen,en00,en01,en02,en03,en04,en05,en06,en07,en08,en09,en10,en11,en12,en13,en14,en15,en16,en17,en18,en19,en20,en21,en22,en23;

assign en00 = (iH_Count    >=    12'd0    && iH_Count <=  12'd80  -1 )? 1'b1 : 1'b0;
assign en01 = (iH_Count    >=    12'd80   && iH_Count <=  12'd160 -1 )? 1'b1 : 1'b0;
assign en02 = (iH_Count    >=    12'd160  && iH_Count <=  12'd240 -1 )? 1'b1 : 1'b0;
assign en03 = (iH_Count    >=    12'd240  && iH_Count <=  12'd320 -1 )? 1'b1 : 1'b0;
assign en04 = (iH_Count    >=    12'd320  && iH_Count <=  12'd400 -1 )? 1'b1 : 1'b0;
assign en05 = (iH_Count    >=    12'd400  && iH_Count <=  12'd480 -1 )? 1'b1 : 1'b0;
assign en06 = (iH_Count    >=    12'd480  && iH_Count <=  12'd560 -1 )? 1'b1 : 1'b0;
assign en07 = (iH_Count    >=    12'd560  && iH_Count <=  12'd640 -1 )? 1'b1 : 1'b0;
assign en08 = (iH_Count    >=    12'd640  && iH_Count <=  12'd720 -1 )? 1'b1 : 1'b0;
assign en09 = (iH_Count    >=    12'd720  && iH_Count <=  12'd800 -1 )? 1'b1 : 1'b0;
assign en10 = (iH_Count    >=    12'd800  && iH_Count <=  12'd880 -1 )? 1'b1 : 1'b0;
assign en11 = (iH_Count    >=    12'd880  && iH_Count <=  12'd960 -1 )? 1'b1 : 1'b0;
assign en12 = (iH_Count    >=    12'd960  && iH_Count <=  12'd1040 -1 )? 1'b1 : 1'b0;
assign en13 = (iH_Count    >=    12'd1040 && iH_Count <=  12'd1120 -1 )? 1'b1 : 1'b0;
assign en14 = (iH_Count    >=    12'd1120 && iH_Count <=  12'd1200 -1 )? 1'b1 : 1'b0;
assign en15 = (iH_Count    >=    12'd1200 && iH_Count <=  12'd1280 -1 )? 1'b1 : 1'b0;
assign en16 = (iH_Count    >=    12'd1280 && iH_Count <=  12'd1360 -1 )? 1'b1 : 1'b0;
assign en17 = (iH_Count    >=    12'd1360 && iH_Count <=  12'd1440 -1 )? 1'b1 : 1'b0;
assign en18 = (iH_Count    >=    12'd1440 && iH_Count <=  12'd1520 -1 )? 1'b1 : 1'b0;
assign en19 = (iH_Count    >=    12'd1520 && iH_Count <=  12'd1600 -1 )? 1'b1 : 1'b0;
assign en20 = (iH_Count    >=    12'd1600 && iH_Count <=  12'd1680 -1 )? 1'b1 : 1'b0;
assign en21 = (iH_Count    >=    12'd1680 && iH_Count <=  12'd1760 -1 )? 1'b1 : 1'b0;
assign en22 = (iH_Count    >=    12'd1760 && iH_Count <=  12'd1840 -1 )? 1'b1 : 1'b0;
assign en23 = (iH_Count    >=    12'd1840 && iH_Count <=  12'd1920 -1 )? 1'b1 : 1'b0;

assign outen = (iH_Block_Duty_Count <= H_Block_Duty_pre_pixel )? 1'b1 : 1'b0;


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



always@(CS, iDE, 
outen, en00,en01,en02,en03,en04,en05,en06,en07,en08,en09,en10,en11,en12,en13,en14,en15,en16,en17,en18,en19,en20,en21,en22,en23)
begin
    case(CS)
    S0:
        begin
            oH_Duty    = 24'h000000;
            NS    =    (iDE)    ?    H00    :    S0;
        end
//-----------------------
    H00:
        begin
            oH_Duty     =    (outen)    ?    24'h000001    :    24'h000000;
            NS    =    (en00)    ?    H00    :    H01;
        end
//-----------------------    
    H01:
        begin
            oH_Duty     =    (outen)    ?    24'h000002    :    24'h000000;
            NS    =    (en01)    ?    H01    :    H02;
        end
//-----------------------            
    H02:
        begin
            oH_Duty     =    (outen)    ?    24'h000004    :    24'h000000;
            NS    =    (en02)    ?    H02    :    H03;
        end
//-----------------------
    H03:
        begin
            oH_Duty     =    (outen)    ?    24'h000008    :    24'h000000;
            NS    =    (en03)    ?    H03    :    H04;
        end
//-----------------------            
    H04:
        begin
            oH_Duty     =    (outen)    ?    24'h000010    :    24'h000000;
            NS    =    (en04)    ?    H04    :    H05;
        end
//-----------------------            
    H05:
        begin
            oH_Duty     =    (outen)    ?    24'h000020    :    24'h000000;
            NS    =    (en05)    ?    H05    :    H06;
        end
//-----------------------
    H06:
        begin
            oH_Duty     =    (outen)    ?    24'h000040    :    24'h000000;
            NS    =    (en06)    ?    H06    :    H07;
        end
//-----------------------
    H07:
        begin
            oH_Duty     =    (outen)    ?    24'h000080    :    24'h000000;
            NS    =    (en07)    ?    H07    :    H08;
        end
//-----------------------
    H08:
        begin
            oH_Duty     =    (outen)    ?    24'h000100    :    24'h000000;
            NS    =    (en08)    ?    H08    :    H09;
        end
//-----------------------
    H09:
        begin
            oH_Duty     =    (outen)    ?    24'h000200    :    24'h000000;
            NS    =    (en09)    ?    H09    :    H10;
        end
//-----------------------
    H10:
        begin
            oH_Duty     =    (outen)    ?    24'h000400    :    24'h000000;
            NS    =    (en10)    ?    H10    :    H11;
        end
//-----------------------
    H11:
        begin
            oH_Duty     =    (outen)    ?    24'h000800    :    24'h000000;
            NS    =    (en11)    ?    H11    :    H12;
        end
//-----------------------
    H12:
        begin
            oH_Duty     =    (outen)    ?    24'h001000    :    24'h000000;
            NS    =    (en12)    ?    H12    :    H13;
        end
//-----------------------
    H13:
        begin
            oH_Duty     =    (outen)    ?    24'h002000    :    24'h000000;
            NS    =    (en13)    ?    H13    :    H14;
        end
//-----------------------
    H14:
        begin
            oH_Duty     =    (outen)    ?    24'h004000    :    24'h000000;
            NS    =    (en14)    ?    H14    :    H15;
        end
//-----------------------
    H15:
        begin
            oH_Duty     =    (outen)    ?    24'h008000    :    24'h000000;
            NS    =    (en15)    ?    H15    :    H16;
        end
//-----------------------
    H16:
        begin
            oH_Duty     =    (outen)    ?    24'h010000    :    24'h000000;
            NS    =    (en16)    ?    H16    :    H17;
        end
//-----------------------
    H17:
        begin
            oH_Duty     =    (outen)    ?    24'h020000    :    24'h000000;
            NS    =    (en17)    ?    H17    :    H18;
        end
//-----------------------
    H18:
        begin
            oH_Duty     =    (outen)    ?    24'h040000    :    24'h000000;
            NS    =    (en18)    ?    H18    :    H19;
        end
//-----------------------
    H19:
        begin
            oH_Duty     =    (outen)    ?    24'h080000    :    24'h000000;
            NS    =    (en19)    ?    H19    :    H20;
        end
//-----------------------
    H20:
        begin
            oH_Duty     =    (outen)    ?    24'h100000    :    24'h000000;
            NS    =    (en20)    ?    H20    :    H21;
        end
//-----------------------
    H21:
        begin
            oH_Duty     =    (outen)    ?    24'h200000    :    24'h000000;
            NS    =    (en21)    ?    H21    :    H22;
        end
//-----------------------
    H22:
        begin
            oH_Duty     =    (outen)    ?    24'h400000    :    24'h000000;
            NS    =    (en22)    ?    H22    :    H23;
        end
//-----------------------
    H23:
        begin
            oH_Duty     =    (outen)    ?    24'h800000    :    24'h000000;
            NS    =    (en23)    ?    H23    :    S0;
        end
//-----------------------
//    default:
//        begin
//            oH_Duty     =    24'h000000;
//            NS    =    NS;
//        end
    endcase
end
endmodule
