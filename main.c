/*
 * File:   main.c
 * Author: MARWAN
 *
 * Created on April 10, 2020, 2:01 PM
 */


#include <avr/io.h>
#define  led0  2
#define  button0 0
#define  led1  7
#define  button1 4
#define  led2  3
#define button2 2
int main(void) {
    /* data dir register */
    DDRB &= ~(1 << button0); // button0
    DDRC |= (1<<led0); // out put led0
    DDRB &= ~(1<<button1); // input button1
    DDRC |= (1<<led1);  //output led1
    DDRD &= ~(1<<button2); //button 2 input
    DDRD |= (1<<led2); //led 2 output        
    
    while (1) {
        if ( ispresseda(button0)) {
            setpina(led0);
        } else {
            resetpina(led0);
        }
if ( ispressedb(button1)) {
            setpinb(led1);
        } else {
            resetpinb(led1);
        }
        if ( ispressedc(button2)) {
            setpinc(led2);
        } else {
            resetpinc(led2);
        }
    }
}

