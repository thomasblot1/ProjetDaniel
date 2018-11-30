

#include "main.h"
#include "glcd.h"
#pragma config FOSC = HS 		//oscillator HS
#pragma config PWRT = OFF
#pragma config BOR = OFF
#pragma config WDT = OFF 		//Disable watchDog
#pragma config LVP = OFF 		//Disable low voltage programmig
#pragma config DEBUG = OFF		//Debug OFFoo


void main (void)
{
    PORTE=0x00;
    // call the function that will init the PIC
    initMyPIC18F();
    glcd_Init(GLCD_ON);
    glcd_Image();
    
    //glcd_PlotPixel(2,2, 0xFF);
    
    //glcd_SetCursor(59,10);
    //glcd_WriteString("BOPPE ",f8X8,1);
    
    //glcd_SetCursor(54,30);
    //glcd_WriteString("RINGELSTEIN ",f8X8,1);
    
    //glcd_SetCursor(56,50);
    //glcd_WriteString("BARALLE ",f8X8,1);
    
    while(1)
    {
        
    }

}// end of the main function

// make sure to have an empty LAST line in any *.c file (just hit an Enter)!

