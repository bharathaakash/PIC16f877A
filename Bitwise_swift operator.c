#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
void main()
{
	TRISB=0;
	PORTB=0X01;
	__delay_ms(1000);
	for(int i=1;i<8;i++)
    {
		PORTB = PORTB << 1;
		__delay_ms(1000);
	}
    PORTB=0X80;
    for(int i=1;i<8;i++)
    {
      PORTB = PORTB >> 1;
      __delay_ms(1000);
    }
    int a,b;
    a=0x01;
    b=0x80;
    for(int i=0;i<8;i++){
       PORTB = a | b;
       __delay_ms(1000);
       a = a << 1;
       b = b >> 1;
    }
    
}
		