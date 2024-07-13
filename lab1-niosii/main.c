#include "system.h"
    #include "altera_avalon_pio_regs.h"
    #include "alt_types.h"
    #include "stdio.h"
    const alt_u8
    led_data[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
    int main (void)
    {
     int count=0;
     alt_u8 led;
     volatile int i;
     while (1)
     { if (count==7)
     {count=0;}
     else
     {count++;}
     led=led_data[count];
     IOWR_ALTERA_AVALON_PIO_DATA(PIO_LED_BASE, led);
     i = 0;
     printf("Hello Nios-II\n");
     while (i<500000)
     i++;
     }
     return 0;
    }