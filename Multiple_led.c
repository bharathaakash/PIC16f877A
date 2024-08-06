#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
void main(){
	while(1){
		TRISB=0;
		PORTB=0x81;
		__delay_ms(100);
		PORTB=0x42;
		__delay_ms(100);
		PORTB=0x24;
		__delay_ms(100);
		PORTB=0x18;
		__delay_ms(100);
		PORTB=0x18;
		__delay_ms(100);
		PORTB=0x24;
		__delay_ms(100);
		PORTB=0x42;
		__delay_ms(100);
		PORTB=0x81;
		__delay_ms(100);
	}
}
		