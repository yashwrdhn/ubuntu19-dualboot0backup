#include "firebird_simulation.h"		
#include <util/delay.h>				
#include "lcd.h"						

unsigned char pattern_e[8] = {
	0b00011111,						
	0b00010001,
	0b00010011,
	0b00010110,
	0b00011100,
	0b00010000,
	0b00011111,
	0b00000000
};

unsigned char positive_up[8] = {
	0b00000011,
	0b00000100,
	0b00001000,
	0b00010000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
};
unsigned char positive_down[8]= {
	0b11000,
	0b00100,
	0b00010,
	0b00001,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};
unsigned char negative_up[8]= {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00001,
	0b00010,
	0b11100,
	0b00000
};
unsigned char negative_down[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01000,
	0b00111,
	0b00000
};

void lcd_custom_char (unsigned char loc, unsigned char *pattern)
{
	
	 unsigned char i;
    if(loc<8)
    {
     lcd_wr_command(0x40 + (loc*8)); 
       for(i=0;i<8;i++) 
           lcd_wr_char(0,0,pattern[i]);      
		   
    }   
}	

int main(){ 
	lcd_port_config();

	lcd_init();lcd_clear();
	lcd_home();
	
	

	lcd_clear();
	lcd_custom_char(5,pattern_e);
	lcd_wr_char(2,7,5);
	_delay_ms(2000);
	lcd_clear();

	lcd_custom_char(1,positive_up);
	lcd_custom_char(2,positive_down);
	lcd_custom_char(3,negative_down);
	lcd_custom_char(4,negative_up);

	for(int i=0;i<4;++i){
	lcd_wr_char(1,4*i+1,1);lcd_wr_char(2,4*i+1,1);
	lcd_wr_char(1,4*i+2,2);lcd_wr_char(2,4*i+2,2);
	lcd_wr_char(1,4*i+3,3);lcd_wr_char(2,4*i+3,3);
	lcd_wr_char(1,4*i+4,4);lcd_wr_char(2,4*i+4,4);
	
	}

	return 0;
}




