#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(WDTE_OFF & FOSC_HS & BOREN_ON & PWRTE_OFF & LVP_OFF);
 
#define RS RD0
#define RW RD1
#define E  RD2

void lcd_cmd(unsigned char cmd)
{
   RS = 0;
   RW = 0;
   E  = 1;
   PORTB = cmd;
   __delay_ms(100);
   E = 0;
}     
void lcd_data(unsigned char data)                                                                                 
{
   RS = 1;
   RW = 0;
   E  = 1;
   PORTB = data;
   __delay_ms(100);
   E = 0;
}

void main()
{
  TRISD0 = 0;
  TRISD1 = 0;
  TRISD2 = 0;
  TRISB  = 0;

  lcd_cmd(0x38);
  lcd_cmd(0x0F);
  lcd_cmd(0x01);
  
  char arr[] = {'s','c','h','o','o','l',' ','o','f',' ','l','i','n','u','x'};
  for(int i=0;i<15;i++)
  {
    lcd_data(arr[i]);
  }
  char seg[] = {'d','h','a','r','m','a','p','u','r','i'};
  lcd_cmd(0xC0);
  for(int  i=0;i<10;i++)
  { 
    lcd_data(seg[i]);
  }
  
  
  
}	