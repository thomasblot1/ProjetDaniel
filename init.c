#include "init.h"

// --- init the PIC18F device

void initMyPIC18F(void) {
    // PORTA digital
    ADCON1 = 0x0F;
    ADCON0 = 0;

    // set all ports as OUTPUTS only the screen will be considered as output
    TRISA = 0x00;
    TRISB = 0x00;
    TRISC = 0xFF;
    TRISD = 0x00;
    TRISE = 0x00;
    // thomas travaille sur le tris pour el port e et le port b des boutons
    // set port by port on "all zeros"
    PORTA = 0x00;
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
    // make sure to have an empty LAST line in any *.c file (just hit an Enter)!

    PORTE = 0x00;

}
// make sure to have an empty LAST line in any *.c file (just hit an Enter)!
