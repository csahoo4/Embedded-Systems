#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include<lcd.h>
#include<timer.h>
void main()
{int x;
DDRC=0b11111111;
DDRD=0b11111111;
adc_init();
lcd_init();
timer0_fastpwm_init();
while(1)
{x=adc_read(0);
dis_cmd(0x8f);
dis_number(x);
if(x>=1000)
{ dis_cmd(1);
  _delay_ms(100);
}
if(x>=480&&x<=500)
{ PORTD=0;}
if(x>=500&&x<=550)
{ PORTD=0b00001001;
   OCR0=70;}
if(x>=550&&x<=600)
{ PORTD=0b00001001;
   OCR0=100;}
if(x>=600&&x<=650)
{ PORTD=0b00001001;
   OCR0=130;}
if(x>=650&&x<=700)
{ PORTD=0b00001001;
   OCR0=160;}
if(x>=700&&x<=750)
{ PORTD=0b00001001;
   OCR0=190;}
if(x>=750&&x<=800)
{ PORTD=0b00001001;
   OCR0=220;}
if(x>=800&&x<=900)
{ PORTD=0b00001001;
   OCR0=235;}
if(x>=900&&x<=1000)
{ PORTD=0b00001001;
   OCR0=255;}
if(x>=460&&x<=470)
{ PORTD=0b00000110;
   OCR0=70;}
if(x>=425&&x<=460)
{ PORTD=0b00000110;
   OCR0=100;}
if(x>=390&&x<=425)
{ PORTD=0b00000110;
   OCR0=130;}
if(x>=340&&x<=390)
{ PORTD=0b00000110;
   OCR0=150;}
 if(x>=280&&x<=340)
{ PORTD=0b00000110;
   OCR0=170;}
if(x>=250&&x<=280)
{ PORTD=0b00000110;
   OCR0=190;}
if(x>=210&&x<=250)
{ PORTD=0b00000110;
   OCR0=210;}
if(x>=170&&x<=210)
{ PORTD=0b00000110;
   OCR0=255;}
}
}
  
