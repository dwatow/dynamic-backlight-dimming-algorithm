`timescale 1ns / 1ps
module enOU_rstALG(iODCK,iV_Duty,oOU_en,oALG_rst);

    input iODCK;
    input iV_Duty;
    output oOU_en;
    output oALG_rst;

reg [8:0] enOU_rstALG_Count;//1_0001_1000

assign oOU_en   = (enOU_rstALG_Count == 5)?1'b1:
                  (enOU_rstALG_Count == 6)?1'b1:
						(enOU_rstALG_Count == 7)?1'b1:1'b0;

assign oALG_rst   = (enOU_rstALG_Count == 85)?1'b0:
                    (enOU_rstALG_Count == 86)?1'b0:
	                 (enOU_rstALG_Count == 87)?1'b0:1'b1;
						
always@(posedge iODCK, posedge iV_Duty)
begin
   if(iV_Duty)
	begin
		enOU_rstALG_Count <= 0;
	end
	else
	begin
	   if(enOU_rstALG_Count == 100)
		   enOU_rstALG_Count <= 100;
		else
         enOU_rstALG_Count <= enOU_rstALG_Count + 1;
	end
end
endmodule
