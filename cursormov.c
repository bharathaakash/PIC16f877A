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
  
  //lcd_cmd(0x14);
  char arr[] = "school of linux";
  for(int i=0;i<15;i++)
  {
     lcd_data(arr[i]);
  }
  //lcd_cmd(0x01);
  //__delay_ms(2000);
  
  //lcd_cmd(0x8F);
 // __delay_ms(500);
 for(int i=0;i<20;i++)
 {
   lcd_cmd(0x1C);
   __delay_ms(100);
 } 
// lcd_cmd(0x01);
 //lcd_cmd(0x80);
 //__delay_ms(5000);
  
  for(int i=0;i<40;i++)
  {
     lcd_cmd(0x18);
     __delay_ms(100);
  }
  
  
  
  
}	