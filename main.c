

#include "main.h"
#include "glcd.h"

#include <xc.h>

#pragma config FOSC = HS 		//oscillator HS
#pragma config PWRT = OFF
#pragma config BOR = OFF
#pragma config WDT = OFF 		//Disable watchDog
#pragma config LVP = OFF 		//Disable low voltage programmig
#pragma config DEBUG = OFF		//Debug OFFoo


void main (void)
{
    PORTE=0x00;
    int y=0,i=0;
    // call the function that will init the PIC
    initMyPIC18F();
    glcd_Init(GLCD_ON);

        glcd_PlotPixel(2,2, 0xFF);
        glcd_SetCursor(51,10);
        glcd_WriteString("Space Invader",f8X8,1);
        glcd_SetCursor(53,30);
        glcd_WriteString("Let's PLAY",f8X8,1);
        glcd_SetCursor(48,50);
        glcd_WriteString("Made by Daniel, Gabriel et Thomas",f8X8,1);
        __delay_ms(3000);
    glcd_Image();



    while(1)
    {

    }

}// end of the main function

// make sure to have an empty LAST line in any *.c file (just hit an Enter)!
