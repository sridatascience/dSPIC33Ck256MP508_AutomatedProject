#include <xc.h>
#pragma config ICS = PGD3              // ICD Communication Channel Select bits (Communicate on PGC3 and PGD3)
uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   volatile uint8_t a = 0x01;
   PG2CONLbits.ON = a;
   volatile uint8_t c = 0x01;
   PG4CONLbits.ON = c;
   volatile uint8_t b =0x01;
   PG1CONLbits.ON = b;
   volatile uint8_t t = add(a,b,c)-0x03;
   CORCONbits.SATA = t;
   return;
}