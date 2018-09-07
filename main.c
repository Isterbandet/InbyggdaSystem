#include <avr/io.h>

#include "serial.h"
#include <util/delay.h>
//const char *str = "Anton Eklof";
 
void main (void){
	//uart_init();
 
 DDRB = 0x01; //set bort b to outbput

 while(1) {
	//uart_putstr(str);
 	PORTB = 0x01;// ettan sätter till på
 	_delay_ms(500);
	//uart_putchar('\n');
 	PORTB= 0x00; //stänger av
 	_delay_ms(500);
 }
}
