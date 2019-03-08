#include<avr/io.h>
#include<util/delay.h>
#include<lcd.h>
void main()
{int i=0,a=1,f=1;
DDRC=0b11111111;
DDRB=0b11111111;
lcd_init();
dis_cmd(0x88);
dis_string("00:00:0");
while(1)
{dis_cmd(0x8f);
 dis_number(i++);
_delay_ms(1000);
if(i==15)
  { PORTB=PORTB|(1<<0);}
  if(i==16)
  { PORTB=PORTB&(~(1<<0));} 
if(i==60)
{i=0;
 dis_cmd(0x8e);
 dis_data('0');
 
 if(a==60)
 {a=0;
  dis_cmd(0x8b);
  dis_data('0');
 if(f==25)
  {f=0;
   dis_cmd(0x88);
   dis_data('0');
   }
  dis_cmd(0x89);
  dis_number(f++);
  
  } 
 dis_cmd(0x8c);
 dis_number(a++);
 
 }
}
}
