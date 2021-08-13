`timescale 1ns / 1ps
module InUnitBuff(iODCK, iRST, iH_Duty, iPixelData, iV_Address, iV_Duty, iOU_en, iALG_rst, iV_Block_Duty_Count, 
                               oH_Duty, oPixelData, oV_Address, oV_Duty, oOU_en, oALG_rst, oV_Block_Duty_Count);

input iODCK;
input iRST;

input [ 23:0] iH_Duty;           output [ 23:0] oH_Duty;            reg [ 23:0] oH_Duty;
input [191:0] iPixelData;        output [191:0] oPixelData;         reg [191:0] oPixelData;               
input [  3:0] iV_Address;        output [  3:0] oV_Address;         reg [  3:0] oV_Address;              
input iV_Duty;                   output oV_Duty;                    reg oV_Duty;       
input iOU_en;                    output oOU_en;                     reg oOU_en;
input iALG_rst;                  output oALG_rst;                   reg oALG_rst;    
input [  6:0]iV_Block_Duty_Count;output [  6:0]oV_Block_Duty_Count; reg [  6:0]oV_Block_Duty_Count;    

always@(posedge iODCK, posedge iRST)
begin
   if(iRST)
	begin
      oH_Duty    <= 0;
      oPixelData <= 0;
      oV_Address <= 0;
      oV_Duty    <= 0;
	   oOU_en     <= 0;
	   oALG_rst   <= 0;
		oV_Block_Duty_Count <= 0;
	end
	else
	begin
      oH_Duty             <= iH_Duty;
      oPixelData          <= iPixelData;
      oV_Address          <= iV_Address;
      oV_Duty             <= iV_Duty;
	   oOU_en              <= iOU_en;
	   oALG_rst            <= iALG_rst;
	   oALG_rst            <= iALG_rst;
		oV_Block_Duty_Count <= iV_Block_Duty_Count;
	end
end
endmodule
