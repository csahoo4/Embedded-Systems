#include<avr/io.h>
#include<util/delay.h>
#include<lcd.h>
void main()
{ unsigned int x;
  DDRC=0b11111111;
  lcd_init();
  adc_init();
  while(1)
  { x=adc_read(0);
    dis_cmd(0x8f);
    dis_number(x);}
}
