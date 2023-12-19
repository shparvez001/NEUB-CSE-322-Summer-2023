#include<avr/io.h>
#include<util/delay.h>

int main()
{
  PORTB=0xff; //Declare full port B as output
  
  while(1)
  {
    PORTB=0x00; //turn of all output
    _delay_ms(1000);
    PORTB=0xff; //turn on all output
    _delay_ms(1000);
  }
}
