/*
 * File:   main.c
 * Author: Mateus
 *
 * Created on 26 de Fevereiro de 2018, 22:19
 */

#include "config_bits.h"
#include "display7segmentos.h"

void main(){
    
    TRISC = 0xC0;
    int i = 0;
    print_7_seg(0);
    while(1){
        if(PORTCbits.RC7 == 1){
            if(i != 9)
                i++;
            print_7_seg(i);
            PORTCbits.RC0 = 1;
            __delay_ms(500);
            PORTCbits.RC0 = 0;
        }
        if(PORTCbits.RC6 == 1){
            if(i != 0)
                i--;            
            print_7_seg(i);
            PORTCbits.RC1 = 1;
            __delay_ms(500);
            PORTCbits.RC1 = 0;
        }
    }
}