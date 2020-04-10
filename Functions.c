/*
 * File:   Functions.c
 * Author: MARWAN
 *
 * Created on April 10, 2020, 9:57 PM
 */


#include <xc.h>

void setpina(int no) {
    PORTC |= (1 << no);
}

void resetpina(int no) {
    PORTC &= ~(1 << no);
}

int ispresseda(int b) {
    if (PINB & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}

void setpinb(int no) {
    PORTC |= (1 << no);
}

void resetpinb(int no) {
    PORTC &= ~(1 << no);
}
int ispressedb(int b) {
    if (PINB & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}
void setpinc(int no) {
    PORTD |= (1 << no);
}

void resetpinc(int no) {
    PORTD &= ~(1 << no);
}
int ispressedc(int b) {
    if (PIND & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}
