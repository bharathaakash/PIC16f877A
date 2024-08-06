#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);

void main()
{
	while(1)
	{
		TRISB = 0; // setting the port A for output
	//	PORTA = 0xFF;
	//	__delay_ms(100);
		PORTB = 0b10011001;
		__delay_ms(100);
       // PORTA = 0x10;
       // __delay_ms(100);
        //PORTA = 0x23;
        //__delay_ms(100);
		
	}
}