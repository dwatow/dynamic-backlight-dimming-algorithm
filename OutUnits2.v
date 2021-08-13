//190.404MHz
module OutUnits(iODCK, iDE, iV_address, iBlockData, oWEA, oData, oAddress);

input iODCK;
input iDE;
input [3:0] iV_address;
input [191:0] iBlockData;
output oWEA;
output [7:0] oData;
output [8:0] oAddress;

reg oWEA;
reg [7:0] oData;
reg [8:0] oAddress;

reg [191:0] tBlockData;
reg [4:0] tH_Address;
reg [3:0] tV_Address;

parameter [2:0] 
S0 = 3'b000,
S1 = 3'b001,
W0 = 3'b010,
W1 = 3'b011,
W2 = 3'b100,
W3 = 3'b101;

reg [2:0] CS,NS;

always@(posedge iODCK, posedge iDE)
begin
//	if(iDE)
//		CS <= S0;
//	else
//		CS <= NS;
	CS <= iDE ? S0 : NS;
end

wire zeroen,adden;

always@(posedge iODCK, posedge iDE)
begin
	if(iDE)
	begin
		tV_Address <= iV_address;//Updata V_address
		tBlockData <= iBlockData;
	end
	else
	begin
		tBlockData <= tBlockData;
		tV_Address <= tV_Address;
	end
end

assign adden = (NS == W2) ? 1'b1 : 1'b0;
assign zeroen = (NS == S1 || NS == W3) ? 1'b1 : 1'b0;

always@(posedge iODCK, posedge iDE)
begin
	if(iDE)
	begin
		tH_Address <= 5'd24;//Don't do anything
	end
	else
	begin
		if(adden)//			(NS == W2)
			tH_Address <= tH_Address + 1;
		else if(zeroen)//			(NS == S1 || NS == W3)
			tH_Address <= 0;
		else
			tH_Address <= tH_Address;
	end
end

always@(CS,iDE,tH_Address,tV_Address,tBlockData)
begin
	case(CS)
	S0://iDE == 1
	begin
		oWEA			= 1'b0;
		oData 		= 8'h00;
		oAddress 	= 9'b000000000;
		NS = (iDE) ? S0 : S1 ;
//		if(tV_Address == 15)
//			NS = S0;
//		else
//			NS = W0;
	end	
	S1:
	begin
		oWEA			= 1'b0;
		oData			= 8'h00;
		oAddress 	= {tV_Address,tH_Address};
		NS = (tV_Address == 15)?W3:W0;
//		if(tV_Address == 15)
//			NS = W3;
//		else
//			NS = W0;
	end	
	W0:
	begin
		oWEA			= 1'b1;
		oAddress 	= {tV_Address,tH_Address};		
		case(tH_Address)
				5'd0	:	oData = tBlockData[  7:  0];
				5'd1	:	oData = tBlockData[ 15:  8];
				5'd2	:	oData = tBlockData[ 23: 16];
				5'd3	:	oData = tBlockData[ 31: 24];
				5'd4	:	oData = tBlockData[ 39: 32];
				5'd5	:	oData = tBlockData[ 47: 40];
				5'd6	:	oData = tBlockData[ 55: 48];
				5'd7	:	oData = tBlockData[ 63: 56];
				5'd8	:	oData = tBlockData[ 71: 64];
				5'd9	:	oData = tBlockData[ 79: 72];
				5'd10	:	oData = tBlockData[ 87: 80];
				5'd11	:	oData = tBlockData[ 95: 88];
				5'd12	:	oData = tBlockData[103: 96];
				5'd13	:	oData = tBlockData[111:104];
				5'd14	:	oData = tBlockData[119:112];
				5'd15	:	oData = tBlockData[127:120];
				5'd16	:	oData = tBlockData[135:128];
				5'd17	:	oData = tBlockData[143:136];
				5'd18	:	oData = tBlockData[151:144];
				5'd19	:	oData = tBlockData[159:152];
				5'd20	:	oData = tBlockData[167:160];
				5'd21	:	oData = tBlockData[175:168];
				5'd22	:	oData = tBlockData[183:176];
				5'd23	:	oData = tBlockData[191:184];
			  default:	oData = 8'h00;
		endcase
		NS = W1;
	end
	W1:
	begin
		oWEA			= 1'b0;
		case(tH_Address)
				5'd0	:	oData = tBlockData[  7:  0];
				5'd1	:	oData = tBlockData[ 15:  8];
				5'd2	:	oData = tBlockData[ 23: 16];
				5'd3	:	oData = tBlockData[ 31: 24];
				5'd4	:	oData = tBlockData[ 39: 32];
				5'd5	:	oData = tBlockData[ 47: 40];
				5'd6	:	oData = tBlockData[ 55: 48];
				5'd7	:	oData = tBlockData[ 63: 56];
				5'd8	:	oData = tBlockData[ 71: 64];
				5'd9	:	oData = tBlockData[ 79: 72];
				5'd10	:	oData = tBlockData[ 87: 80];
				5'd11	:	oData = tBlockData[ 95: 88];
				5'd12	:	oData = tBlockData[103: 96];
				5'd13	:	oData = tBlockData[111:104];
				5'd14	:	oData = tBlockData[119:112];
				5'd15	:	oData = tBlockData[127:120];
				5'd16	:	oData = tBlockData[135:128];
				5'd17	:	oData = tBlockData[143:136];
				5'd18	:	oData = tBlockData[151:144];
				5'd19	:	oData = tBlockData[159:152];
				5'd20	:	oData = tBlockData[167:160];
				5'd21	:	oData = tBlockData[175:168];
				5'd22	:	oData = tBlockData[183:176];
				5'd23	:	oData = tBlockData[191:184];
			  default:	oData = 8'h00;
		endcase
		oAddress 	= {tV_Address,tH_Address};		
		NS = W2;
	end
	W2:
	begin
		oWEA 			= 1'b0;
		case(tH_Address)
				5'd0	:	oData = tBlockData[  7:  0];
				5'd1	:	oData = tBlockData[ 15:  8];
				5'd2	:	oData = tBlockData[ 23: 16];
				5'd3	:	oData = tBlockData[ 31: 24];
				5'd4	:	oData = tBlockData[ 39: 32];
				5'd5	:	oData = tBlockData[ 47: 40];
				5'd6	:	oData = tBlockData[ 55: 48];
				5'd7	:	oData = tBlockData[ 63: 56];
				5'd8	:	oData = tBlockData[ 71: 64];
				5'd9	:	oData = tBlockData[ 79: 72];
				5'd10	:	oData = tBlockData[ 87: 80];
				5'd11	:	oData = tBlockData[ 95: 88];
				5'd12	:	oData = tBlockData[103: 96];
				5'd13	:	oData = tBlockData[111:104];
				5'd14	:	oData = tBlockData[119:112];
				5'd15	:	oData = tBlockData[127:120];
				5'd16	:	oData = tBlockData[135:128];
				5'd17	:	oData = tBlockData[143:136];
				5'd18	:	oData = tBlockData[151:144];
				5'd19	:	oData = tBlockData[159:152];
				5'd20	:	oData = tBlockData[167:160];
				5'd21	:	oData = tBlockData[175:168];
				5'd22	:	oData = tBlockData[183:176];
				5'd23	:	oData = tBlockData[191:184];
			  default:	oData = 8'h00;
		endcase
		oAddress 	= {tV_Address,tH_Address};		
		NS = (tH_Address == 5'd24)	? W3 : W0 ;
//		if(tH_Address == 5'd24)		
//			NS = W3;
//		else
//			NS = W0;
	end
	W3:
	begin
		oWEA 			= 1'b0;
		oData 		= 8'h00;
		oAddress 	= 9'b000000000;
		NS = W3;
	end
	default:
	begin
		oWEA 			= 1'b0;
		oData 		= 8'h00;
		oAddress 	= 9'b000000000;
		NS = W3;
	end
	endcase
end
endmodule

