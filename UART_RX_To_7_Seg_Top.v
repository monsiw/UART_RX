module UART_RX_To_7_Seg_Top
  (input i_Clk,     // Main Clock
   input i_UART_RX, // UART RX Data
	output o_UART_TX,   // UART TX Data
   // Segment1 is upper digit, Segment2 is lower digit
   output o_Segment_7,	
   output o_Segment_A,
   output o_Segment_B,
   output o_Segment_C,
   output o_Segment_D,
   output o_Segment_E,
   output o_Segment_F,
   output o_Segment_G,
	output reg [2:0] led_enable = 3'h0,
	output reg [7:0] LED = 8'h00);
 
   wire w_RX_DV;
   wire [7:0] w_RX_Byte;
	wire w_TX_Active, w_TX_Serial;
   wire w_Segment_7, w_Segment_A, w_Segment_B, w_Segment_C, 
   w_Segment_D, w_Segment_E, w_Segment_F, w_Segment_G;	
	
	reg [3:0] nowyWektor = 4'h0;
	reg wybranyBajtMlodszy = 1'b1;
	reg [10:0] licznik = 11'h00;
	
	reg [7:0] nowy = 8'h0;

  // 12,000,000 / 115,200 = 104
  UART_RX #(.CLKS_PER_BIT(104)) UART_RX_Inst
  (.i_Clock(i_Clk),
   .i_RX_Serial(i_UART_RX),
   .o_RX_DV(w_RX_DV),
   .o_RX_Byte(w_RX_Byte));
	
  UART_TX #(.CLKS_PER_BIT(104)) UART_TX_Inst
  (.i_Clock(i_Clk),
   .i_TX_DV(w_RX_DV),      // Pass RX to TX module for loopback
   .i_TX_Byte(w_RX_Byte),  // Pass RX to TX module for loopback
   .o_TX_Active(w_TX_Active),
   .o_TX_Serial(w_TX_Serial),
   .o_TX_Done());
   
  // Drive UART line high when transmitter is not active
  assign o_UART_TX = w_TX_Active ? w_TX_Serial : 1'b1; 	
  
  // Binary to 7-Segment Converter for Lower Digit
  Binary_To_7Segment SevenSeg_Inst
  (.i_Clk(i_Clk),
   .i_Binary_Num(nowyWektor),
	.o_Segment_7(w_Segment_7),	
	.o_Segment_A(w_Segment_A),
	.o_Segment_B(w_Segment_B),
	.o_Segment_C(w_Segment_C),
	.o_Segment_D(w_Segment_D),
	.o_Segment_E(w_Segment_E),
	.o_Segment_F(w_Segment_F),
	.o_Segment_G(w_Segment_G)); 
	assign o_Segment_7 = ~w_Segment_7;  
	assign o_Segment_A = ~w_Segment_A;
	assign o_Segment_B = ~w_Segment_B;
	assign o_Segment_C = ~w_Segment_C;
	assign o_Segment_D = ~w_Segment_D;
	assign o_Segment_E = ~w_Segment_E;
	assign o_Segment_F = ~w_Segment_F;
	assign o_Segment_G = ~w_Segment_G;

always @(posedge i_Clk)
begin 
LED = w_RX_Byte;
  	if(w_RX_DV) 
  	begin
      nowy = w_RX_Byte;
		//nowy = 8'h5A;
    end
	licznik <= licznik + 1;
	if (licznik == 1200) 
	begin
		licznik <= 0;
			if (wybranyBajtMlodszy)
			begin
				nowyWektor = nowy[3:0];				
			end
			else
			begin
			  nowyWektor = nowy[7:4];		  
			end
			wybranyBajtMlodszy = ~wybranyBajtMlodszy;
	end		
	if (licznik == 0) 
	begin
		if (wybranyBajtMlodszy)
		begin
			led_enable = 3'b101;
		end
		else
		begin
			led_enable = 3'b110;
		end		
end
end
endmodule
