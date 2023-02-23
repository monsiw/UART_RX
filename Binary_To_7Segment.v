/*
This file converts an input binary number into an output which can get sent
to a 7-Segment LED.  7-Segment LEDs have the ability to display all decimal
numbers 0-9 as well as hex digits A, B, C, D, E and F.  The input to this
module is a 4-bit binary number.  This module will properly drive the
individual segments of a 7-Segment LED in order to display the digit.
Hex encoding table can be viewed at:
http://en.wikipedia.org/wiki/Seven-segment_display
*/
module Binary_To_7Segment(
   input       i_Clk,
   input [3:0] i_Binary_Num,
	output      o_Segment_7,
   output      o_Segment_A,
   output      o_Segment_B,
   output      o_Segment_C,
   output      o_Segment_D,
   output      o_Segment_E,
   output      o_Segment_F,
   output      o_Segment_G
   ); 
  reg [7:0]    r_Hex_Encoding = 8'h00;   
  /* 
  Purpose: Creates a case statement for all possible input binary numbers.
  Drives r_Hex_Encoding appropriately for each input combination.
  */ 
  always @(posedge i_Clk)
    begin
      case (i_Binary_Num) 
        4'b0000 : r_Hex_Encoding <= 8'hFC;
        4'b0001 : r_Hex_Encoding <= 8'h60;
        4'b0010 : r_Hex_Encoding <= 8'hDA;
        4'b0011 : r_Hex_Encoding <= 8'hF2;		 
        4'b0100 : r_Hex_Encoding <= 8'h66;  		  
        4'b0101 : r_Hex_Encoding <= 8'hB6;
        4'b0110 : r_Hex_Encoding <= 8'hBE;		  
        4'b0111 : r_Hex_Encoding <= 8'hE0;
        4'b1000 : r_Hex_Encoding <= 8'hFE;		  
        4'b1001 : r_Hex_Encoding <= 8'hF6;
        4'b1010 : r_Hex_Encoding <= 8'hEE;		  
        4'b1011 : r_Hex_Encoding <= 8'h3E;
        4'b1100 : r_Hex_Encoding <= 8'h9C;
        4'b1101 : r_Hex_Encoding <= 8'h7A;
        4'b1110 : r_Hex_Encoding <= 8'h9E;
        4'b1111 : r_Hex_Encoding <= 8'h8E;
      endcase	
		  /*
			not "11111100" when "0000",
			not "01100000" when "0001",
			not "11011010" when "0010",
			not "11110010" when "0011",
			not "01100110" when "0100",
			not "10110110" when "0101",
			not "10111110" when "0110",
			not "11100000" when "0111",
			not "11111110" when "1000",
			not "11110110" when "1001",
			not "11101110" when "1010",		
			not "00111110" when "1011",
			not "10011100" when "1100",
			not "01111010" when "1101",
			not "10011110" when "1110",	
			not "10001110" when others;
			*/		
    end // always @ (posedge i_Clk) 
	 
  assign o_Segment_7 = r_Hex_Encoding[7];
  assign o_Segment_A = r_Hex_Encoding[6];
  assign o_Segment_B = r_Hex_Encoding[5];
  assign o_Segment_C = r_Hex_Encoding[4];
  assign o_Segment_D = r_Hex_Encoding[3];
  assign o_Segment_E = r_Hex_Encoding[2];
  assign o_Segment_F = r_Hex_Encoding[1];
  assign o_Segment_G = r_Hex_Encoding[0]; 
endmodule // Binary_To_7Segment