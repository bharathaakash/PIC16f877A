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
  lcd_cmd(0x0E);
  lcd_cmd(0x01); // clear display

  lcd_cmd(0x40); // assigning CDRAM address 
  char arr[] = {0x04,0x0A,0x04,0x0E,0x15,0x04,0x0A};
  for(int i=0;i<8;i++)
  {
    lcd_data(arr[i]);
  }
  //lcd_cmd(0x80);
  //lcd_data(0);
  
  /*while(1)
  {
    lcd_cmd(0x1C);
   __delay_ms(100);
  }*/
  //lcd_cmd(0x11);
  //lcd_cmd(0x81);
  //lcd_cmd(0x48);
  char seg[] = {0x04,0x0A,0x1F,0x11,0x11,0x11,0x1F};
  for(int i=0;i<7;i++)
  {
   lcd_data(seg[i]);
  }
  char arr1[]={0x00,0x00,0x0A,0x15,0x11,0x0E,0x04};
  for(int i=0;i<7;i++)
  {
    lcd_data(arr1[i]);
  }
  lcd_cmd(0x80);
  lcd_data(0);
  lcd_data(1);
  lcd_data(2);
  
  lcd_cmd(0xC0);
  lcd_data(2);
  
}