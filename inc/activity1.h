#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
//Macro definition

#define LED_ON (PORTB |= (1<<PB0))    //LED ON
#define LED_OFF (PORTB &=~(1<<PB0))   //LED OFF
#define SENSOR_ON !(PINB&(1<<PD2))     // Switch1 ON
#define HEATER_ON !(PINB&(1<<PD3))     // Switch2 ON

void activity1_init();
/**
 * @brief This function is to set up pins
 *
 */


#endif // ACTIVITY1_H_INCLUDED
