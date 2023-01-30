#include <xc.h>
#pragma config WDTE = OFF        // WDT operating mode (WDT enabled regardless of sleep; SWDTEN is ignored)
uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   volatile uint8_t a = 0x05;
   LATA = a;
   volatile uint8_t c = 0x1F;
   TRISA = c;
   volatile uint8_t b =0x08;
   LATB = b;
   volatile uint8_t t = add(a,b,c);
   return;
}