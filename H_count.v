// 241.429MHz
module H_Count(iODCK, iDE_rst, oH_Count, oH_Block_Duty_Count);

	input iODCK;
	input iDE_rst;
	output [11:0]	oH_Count;
	output [ 6:0]	oH_Block_Duty_Count;//0-79	

	reg	[11:0]	oH_Count;
	reg	[ 6:0]	oH_Block_Duty_Count;//0-79	

reg tDE1, tDE2,tDE3,tDE4;
wire tDE5;

assign tDE5 = tDE4 | tDE3;

always@(posedge iODCK or negedge iDE_rst)
begin
    if(!iDE_rst) begin
       tDE1 <= 1'b0;
    end
    else begin
       tDE1 <= 1'b1;
    end
end

always@(posedge iODCK)
begin
    tDE2 <= tDE1;
    tDE3 <= tDE2;
    tDE4 <= tDE3;
end

always@(posedge iODCK, negedge tDE5)
begin
  if(!tDE5)
    oH_Count <= 0;
  else
    oH_Count <= oH_Count + 1;
end	


always@(posedge iODCK, negedge tDE5)
begin
  if(!tDE5)
    oH_Block_Duty_Count <= 0;
  else
    begin
      if(oH_Block_Duty_Count == 79)
        oH_Block_Duty_Count <= 0;
      else
        oH_Block_Duty_Count <= oH_Block_Duty_Count + 1;
    end
end

endmodule
