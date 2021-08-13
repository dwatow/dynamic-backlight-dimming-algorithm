module SPI_out	(iClock, iReset, iAddr1, iAddr2, iData, oSCLK, oSDO, oCS);

input	iClock, iReset;
input [7:0] iAddr1, iAddr2, iData;

output	reg			oSCLK = 1;
output	reg			oSDO = 0;
output	reg			oCS = 1;

reg			[23:0]	Data_buffer;
reg			[4:0]		Count_CS = 24;
reg			[3:0]		Count_DATA;

always@(posedge iClock)
begin
	if(iReset)
	begin
		oSCLK			<=	1;
		oCS			<=	1;			//chip disable
		Count_CS		<=	0;
		Count_DATA	<=	0;
		Data_buffer	<=	{iAddr1,iAddr2,iData};
	end
	else
	begin
		if(Count_CS == 24) 
		begin
			Count_CS 	<= 24;
			Count_DATA	<=	0;
			oSCLK			<=	1;
			oCS			<=	1;		//chip disable
		end
		else
		begin
			oCS			<=	0;		//chip enable 
			
			//Data in & Data out
			if(Count_DATA == 0 )
			begin
				oSCLK		<=	0;
				oSDO		<=	Data_buffer[23];
				Count_DATA	<=	Count_DATA + 1;
			end
			
			if(Count_DATA == 1 )
				Count_DATA	<=	Count_DATA + 1;
							
			if(Count_DATA == 2 )		//DIV 7
			begin
				oSCLK		<=	1;
				//Count_CS	<=	Count_CS + 1;
				Data_buffer	<=	Data_buffer << 1;
				Count_DATA	<=	Count_DATA + 1;
			end
			
			if(Count_DATA == 3 )
				Count_DATA	<=	Count_DATA + 1;
			
			if(Count_DATA == 4 )
			begin
				Count_DATA	<=	0;
				Count_CS	<=	Count_CS + 1;
			end
				
			//-------------------------------
		end
	end
end
endmodule