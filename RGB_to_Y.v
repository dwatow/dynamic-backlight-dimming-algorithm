//194.250MHz
module RGB_to_Y (iODCK, iDE, iQE, oDE_delay3, oY);

//   DVI Side
input iODCK;
input iDE;
input [23:0] iQE;
output oDE_delay3;
output [7:0] oY;
reg    [7:0] oY;

//------------------------------------------------
//   RGB to Y   { Y = R*0.3 + G*0.59 + B*0.11 }
//              ==> Y = (R*5 + G*9 + B*2)/16
//------------------------------------------------

reg [11:0] tRGB;
reg [10:0] tR;
reg [11:0] tG;
reg [ 8:0] tB;

reg tDE0, tDE1, tDE2,tDE3;
wire tDE5;

assign tDE5 = tDE3 | iDE;
assign oDE_delay3 = tDE3 | tDE2;

always@(posedge iODCK or negedge iDE)
begin
    if(!iDE) begin
       tDE0 <= 1'b0;
    end
    else begin
       tDE0 <= 1'b1;
    end
end

always@(posedge iODCK)
begin
    tDE1 <= tDE0;
    tDE2 <= tDE1;
    tDE3 <= tDE2;
end

always@(posedge iODCK, negedge tDE5)
begin
  if(!tDE5)
  begin
     tR   <= 0;
	  tB   <= 0;
	  tG   <= 0;
	  tRGB <= 0;
	  oY   <= 0;
  end
  else
  begin
      tR    <=   iQE[23:16] * 5;
      tG    <=   iQE[15: 8] * 9;
      tB    <=   iQE[ 7: 0] * 2;
      tRGB  <=   tR + tG + tB;
      oY    <=   tRGB >> 4;
	end
end
endmodule
