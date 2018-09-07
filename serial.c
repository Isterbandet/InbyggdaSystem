#include <avr/io.h>
#include <util/delay.h>

#include "serial.h"

/*
#define FOSC 16000000UL//klocka
#define BAUD 38400UL//vad man ska ställa in till
#define MYUBRR FOSC/16/BAUD-1//rimliga baudraten

void uart_init(void){
	unsigned int ubrr=MYUBRR;
	//set baudrate
	UBRR0H=(unsigned char)(ubrr>>8);
	UBRR0L=(unsigned char)(ubrr);
	//Enable transmitter
	UCSR0B=(1<<TXEN0);
	UCSR0C=(3<<UCSZ00);
}

void uart_putchar(char chr){
	while(!(UCSR0A & (1<<UDRE0)));

	if(chr == '\n'){
		UDR0='\r';
		UDR0= chr;
	}
	UDR0=chr;

}
void uart_putstr(const char *str){
	while(*str){

		uart_putchar(*str);
		*str++;
	}

}

*/