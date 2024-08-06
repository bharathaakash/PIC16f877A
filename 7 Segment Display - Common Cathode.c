#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
void main()
{
	TRISB = 0;
	PORTB = 0b00001010;
	__delay_ms(1000);
	PORTB = 0b11011100;
	__delay_ms(1000);
	PORTB = 0b11110100;
	__delay_ms(1000);
	PORTB = 0b01100110;
	__delay_ms(1000);
	PORTB = 0b10110110;
	__delay_ms(1000);
	PORTB = 0b10111110;
	__delay_ms(1000);
	PORTB = 0b11100000;
	__delay_ms(1000);
	PORTB = 0b11111110;
	__delay_ms(1000);
	PORTB = 0b11110110;
	__delay_ms(1000);
}