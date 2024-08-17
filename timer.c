#include <htc.h>
#define _XTAL_FREQ 20000000
__CONFIG (WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
void main()
{
	TRISB = 0;
    TRISD = 0;
	char arr[10] = {0xBF,0x86,0xDB,0xCF,0xE6,0xED,0xFD,0x87,0xFF,0xEF};
    char seg[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    for(int i=0;i<6;i++)
	{
	   for(int j=0;j<6;j++)
       {
         for(int k=0;k<6;k++)
         {
           for(int l=0;l<10;l++)
           {
             for(int m=0;m<60;m++)
             {
               PORTD = 0b00001000;
               PORTB = seg[i];
               __delay_ms(2);
   
               PORTD = 0b00000100;
               PORTB = arr[j];
               __delay_ms(2);
  
               PORTD = 0b00000010;
               PORTB = seg[k];
               __delay_ms(2);

               PORTD = 0b00000001; 
               PORTB = seg[l];
               __delay_ms(2);
             }
           }
         }
       }
     }        
}