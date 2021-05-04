/*
 */
#include "inc\activity1.h"
#include "inc\activity2.h"
#include "inc\activity3.h"
#include "inc\activity4.h"

#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    activity1_init();
    
    initADC();
    uint16_t temp;
    char temp1;
    initUART(103);
    // Insert code

    while(1){
        if(!(PIND &(1<<PD0))){
            if(!(PIND &(1<<PD2))){
                LED_ON;
                initPWM();
                temp = ReadADC(0);
                temp1 = PWM(temp);
                UARTwrite(temp1);
            }
        }
        else{
            LED_OFF;
            OCR1A=0;
        }
    }

    return 0;
}
