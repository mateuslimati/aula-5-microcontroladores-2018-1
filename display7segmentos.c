/*
 * File:   display7segmentos.c
 * Author: Mateus
 *
 * Created on 27 de Fevereiro de 2018, 14:18
 */
#include <xc.h>

void print_7_seg(int i){
        
    TRISB = 0x00; //RB0 as Output PIN
    PORTB = 0xFF;
    
    switch(i){
        case 0:
            PORTB = 0b11000000;
        break;
        case 1:
            PORTB = 0b11111001;
        break;
        case 2:
            PORTB = 0b10100100;
        break;
        case 3:
            PORTB = 0b10110000;
        break;
        case 4:
            PORTB = 0b10011001;
        break;    
        case 5:
            PORTB = 0b10010010;
        break;        
        case 6:
            PORTB = 0b10000010;
        break;
        case 7:
            PORTB = 0b11111000;
        break;
        case 8:
            PORTB = 0b10000000;
        break;
        case 9:
            PORTB = 0b10010000;
        break;    
        default:
            PORTB = 0b11111111;
    }
}
