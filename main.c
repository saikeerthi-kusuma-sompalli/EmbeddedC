/*
 */

#include <avr/io.h>
#include<util/delay.h>
// for delay we are using this function
int main(void)
{
    DDRD &= ~(1<<PD0);
    PORTD |= (1<<PD0);
    DDRD &= ~(1<<PD3);
    PORTD |= (1<<PD3);
    DDRB |= (1<<PB0);
    // Insert code

    while(1){
            if(!(PIND & (1<<PD0))){
                if(!(PIND & (1<<PD3))){
                    PORTB |= (1<<PB0);
                    //_delay_ms(200);
                  }
                else{
                    PORTB &= ~(1<<PB0);
                   // _delay_ms(200);
                }
            }
            else{
                     PORTB &= ~(1<<PB0);
                 //   _delay_ms(200);
                }
}
    return 0;
}
