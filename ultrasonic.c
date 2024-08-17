#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
void main()
{
	TRISB0 = 0;
	TRISB1 = 0;
	TRISD0 = 1;
    
   // __delay_ms(100); 
    RB0 = 1;
    __delay_ms(100);
    RB0 = 0;
    if(RD0 == 1)
	{
      // __delay_ms(100);
      RB1 = 1;
      __delay_ms(1000);
      RB1 = 0;
      __delay_ms(1000);
	}
}