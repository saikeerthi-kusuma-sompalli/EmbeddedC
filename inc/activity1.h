#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
//Macro definition

#define LED_ON (PORTB |= (1<<PB0))    //LED ON
#define LED_OFF (PORTB &=~(1<<PB0))   //LED OFF

void activity1_init();
/**
 * @brief This function is to set up pins
 *
 */


#endif // ACTIVITY1_H_INCLUDED
