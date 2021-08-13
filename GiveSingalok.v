////////////////////////////////////////////////////////////
// Catch Signal
//`define   Catch_Signal   iVSYNC
////////////////////////////////////////////////////////////
module GiveSingalNan(iODCK, reset, iDE, iHSYNC, iVSYNC, iQE, SW, oDE, oHSYNC, oVSYNC, oQE);

   input iODCK;
   input reset;
   input iDE;
   input iHSYNC;
   input iVSYNC;
   input [23:0]iQE;
   input SW;
   
   output oDE;
   output oHSYNC;
   output oVSYNC;
   output [23:0] oQE;
   
   reg oDE        =0;
   reg oHSYNC     =1;
   reg oVSYNC     =0;
   reg [23:0] oQE =0;
////////////////////////////////////////////////////////////
//   Horizontal   Parameter
parameter pixel   =   1;      //Hsync   //DE
parameter H_FRONT =   88;   //HI      //LO
parameter H_SYNC  =   44;   //LO      //LO         88__!44__148 start point??
parameter H_BACK  =   148;   //HI       //LO
parameter H_ACT   =   1920;   //HI       //HI
parameter H_BLANK =   H_FRONT+H_SYNC+H_BACK;         //0~279=280
parameter H_TOTAL =   H_FRONT+H_SYNC+H_BACK+H_ACT;   //0~2199=2200
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
//   Vertical Parameter
parameter lines   =   2200;
parameter V_FRONT =   4;      //LO
parameter V_SYNC  =   5;      //HI
parameter V_BACK  =   36;   //LO
parameter V_ACT   =   1080;   //LO
parameter V_BLANK =   V_FRONT+V_SYNC+V_BACK;         //0~44=45
parameter V_TOTAL =   V_FRONT+V_SYNC+V_BACK+V_ACT;   //0~1124=1125
////////////////////////////////////////////////////////////
//reg [11: 0] DE_Count      =1921;    // 0~1919=1920  +1 =1921
reg         vDE    =0;
reg         tDE    =0;
reg         tHSYNC =1;
reg         tVSYNC =0;
reg [23:0]   tQE    =0;      
reg [11: 0] HSYNC_Count   =0;// 0~2199=2200
reg [10: 0] VSYNC_Count   =0;// 0~1124=1125

always @(posedge iODCK)
begin
   if (SW)
      begin         //SW=1
         oDE         <=iDE;
         oHSYNC      <=iHSYNC;
         oVSYNC      <=iVSYNC;
         oQE         <=iQE;
      end
      else
      begin         //SW=0
         oDE         <=tDE;      //sync
         oHSYNC      <=tHSYNC;
         oVSYNC      <=tVSYNC;
//         oQE         <=iQE;
         if(tDE)
			begin
			   tQE <= tQE + 24'h010101;
            oQE <= tQE;           //sync
			end
         else
			begin
			   tQE <= tQE;
            oQE <= 24'b0;         //
			end
       end
end

always@(posedge iODCK or posedge reset)
begin
   if (reset)
   begin
      HSYNC_Count   <=2199;      // 0~2199=2200 
      VSYNC_Count   <=1124;      // 0~1124=1125
      vDE         <=0;
      
      tDE         <=0;
      tHSYNC      <=1;
      tVSYNC      <=0;
//      tQE         <=0;//
   end
   else
   begin
//      tQE <= tQE + 24'h010101;
      HSYNC_Count <= HSYNC_Count + 1;
      
      if (HSYNC_Count == H_FRONT-1)         //88-1=0~87
      begin
         tHSYNC      <= 0;
      ///////////////////////////////////////////////////
         VSYNC_Count <= VSYNC_Count + 1;
         
         if (VSYNC_Count ==  V_FRONT-1)         //4-1=0~3
            tVSYNC      <=1;
            
         if (VSYNC_Count ==  V_FRONT+V_SYNC-1)   //4+5-1=0~8         
            tVSYNC      <=0;
            
         if (VSYNC_Count ==  V_BLANK-1)      //4+5+36-1=0~44         
            vDE         <=1;   
            
         if (VSYNC_Count ==  V_TOTAL-1)       //0~1124
         begin
            VSYNC_Count <=0;
            vDE         <=0;   
         end
      ///////////////////////////////////////////////////   
      end
         
      if (HSYNC_Count == H_FRONT+H_SYNC-1)         //88+44-1=0~131
         tHSYNC      <= 1;   
         
      if (HSYNC_Count == H_BLANK-1 && vDE == 1 )   //88+44+148-1=0~279
         tDE      <= 1;      
         
      if (HSYNC_Count == H_TOTAL-1)                   //0~2199
      begin
         HSYNC_Count <= 0;
         tDE      <= 0;

      end
   end
end

endmodule
