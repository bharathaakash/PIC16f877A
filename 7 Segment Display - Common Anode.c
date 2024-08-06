#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
void main()
{
	TRISB = 0;
	PORTB = 0b01000001;
	__delay_ms(1000);
	PORTB = 0b00000001;
	__delay_ms(1000);
	PORTB = 0b10010011;
	__delay_ms(1000);
	PORTB = 0b00000011;
	__delay_ms(1000);
	PORTB = 0b10010001;
	__delay_ms(1000);
	PORTB = 0b11010001;
	__delay_ms(1000);
	PORTB = 0b01010001;
	__delay_ms(1000);
	PORTB = 0b01001001;
	__delay_ms(1000);
	PORTB = 0b01001001;
	__delay_ms(1000);
	PORTB = 0b00000111;
	__delay_ms(1000);
	PORTB = 0b10011011;
	__delay_ms(1000);
	PORTB = 0b00100101;
	__delay_ms(1000);
	PORTB = 0b00000011;
	__delay_ms(1000);
	PORTB = 0b11000001;
	__delay_ms(1000);
	PORTB = 0b00110001;
	__delay_ms(1000);
	PORTB = 0b01101101;
	__delay_ms(1000);
	PORTB = 0b00001011;
	__delay_ms(1000);
	PORTB = 0b10010001;
	__delay_ms(1000);
	PORTB = 0b01001001;
	__delay_ms(1000);
	PORTB = 0b01101001;
	__delay_ms(1000);
	PORTB = 0b10000101;
	__delay_ms(1000);
}