module GiveSingal(

	input iODCK,
	input iDE,
	input iHSYNC,
	input iVSYNC,
	input [23:0]iQE,
	input iSW1pass0nothing,
	
	output reg oDE,
	output reg oHSYNC,
	output reg oVSYNC,
	output reg [23:0] oQE

	);

always@(posedge iODCK, negedge iSW1pass0nothing)
begin
	if(!iSW1pass0nothing)
	begin
		oDE 			<= 1'b0;
		oHSYNC		<= 1'b0;
		oVSYNC		<= 1'b0;
		oQE 			<= 24'b0;
	end
	else
	begin
		oDE 			<= iDE;
		oHSYNC		<= iHSYNC;
		oVSYNC		<= iVSYNC;
		oQE 			<= iQE;
	end
end
endmodule
