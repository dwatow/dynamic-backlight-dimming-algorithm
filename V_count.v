//202.265MHz
module V_count(iHSYNC_clk, iVSYNC_rst, oV_Count, oV_Block_Duty_Count);

input iHSYNC_clk;
input iVSYNC_rst;
output [11:0] oV_Count;
output [ 6:0] oV_Block_Duty_Count;//0-79

reg    [11:0] oV_Count;
reg    [ 6:0] oV_Block_Duty_Count;//0-79

always@(posedge iHSYNC_clk, posedge iVSYNC_rst)
begin
      if(iVSYNC_rst)
      begin
         oV_Count            <=   0;
         oV_Block_Duty_Count <= 0;
      end
      else
      begin
         oV_Count <= oV_Count + 1;
         
         if(oV_Count < 36 +1 || oV_Block_Duty_Count == 71)
            oV_Block_Duty_Count <= 0;
         else 
            oV_Block_Duty_Count <= oV_Block_Duty_Count + 1;
      end
end
endmodule
