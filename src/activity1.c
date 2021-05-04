#include"../inc/activity1.h"

#include <avr/io.h>
//#include<util/delay.h>
void activity1_init(){

    DDRB = DDRB |  (1<<PB0);
    PORTB = PORTB & ~(1<<PB0);

    //Set D0 as Input and initialize it to high
    DDRD = DDRD & ~(1<<PD0);
    PORTD = PORTD |  (1<<PD0);

    //Set D2 as Input and initialize it to high
    DDRD = DDRD & ~(1<<PD2);
    PORTD = PORTD |  (1<<PD2);
}
