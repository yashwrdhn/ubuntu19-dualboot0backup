#include "./firebird_simulation.h"		// Header file included that contains macro definitions essential for Firebird V robot
#include <util/delay.h>					// Standard AVR Delay Library

#include "./lcd.c"					// LCD Header file included that contains function definitions essential to deal with LCD
#include <stdio.h>

void lcd_print_wireframe(void)
{	
	lcd_string(1,1,"H:   D:    O:   ");
	lcd_string(2,1,"Binary: ");
}

int main(void){
	
	
	lcd_port_config();					// Initialize the LCD port
	lcd_init();							// Initialize the LCD
	lcd_clear();						// Clear the LCD
	lcd_print_wireframe();				// Print wireframe on the LCD
	unsigned char counter = 0;
    lcd_string(1,1,"hello");

}
