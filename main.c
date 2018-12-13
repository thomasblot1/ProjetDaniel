

#include "main.h"
#include "glcd.h"

#include <xc.h>

#pragma config FOSC = HS 		//oscillator HS
#pragma config PWRT = OFF
#pragma config BOR = OFF
#pragma config WDT = OFF 		//Disable watchDog
#pragma config LVP = OFF 		//Disable low voltage programmig
#pragma config DEBUG = OFF		//Debug OFFoo

void main(void) {
    PORTE = 0x00;
    int y = 0, i = 0;
    // call the function that will init the PIC
    initMyPIC18F();
    glcd_Init(GLCD_ON);

    //glcd_PlotPixel(2,2, 0xFF);
    glcd_SetCursor(10, 1);
    glcd_WriteString("Space Invader", f8X8, 1);
    __delay_ms(500);
    glcd_SetCursor(30, 3);

    

    //glcd_SetCursor(53,60);
    glcd_WriteString("Made by", f8X8, 1);
    glcd_SetCursor(10, 5);
    __delay_ms(20);
    glcd_WriteString("Daniel,Gabriel", f8X8, 1);
    glcd_SetCursor(30, 7);
    glcd_WriteString("et Thomas", f8X8, 1);

    __delay_ms(600);

    glcd_Init(GLCD_OFF);
    //on utilise la fonction quand on arrete pour clean le glcd
    glcd_Init(GLCD_ON);
    glcd_SetCursor(20, 4);
    glcd_WriteString("Let's PLAY", f8X8, 1);
    __delay_ms(400);
    glcd_Init(GLCD_OFF);
    //on utilise la fonction quand on arrete pour clean le glcd
    glcd_Init(GLCD_ON);
    glcd_Image();



    while (1) {
    }

}// end of the main function

// make sure to have an empty LAST line in any *.c file (just hit an Enter)!
