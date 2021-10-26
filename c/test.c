#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    //Decimal = 2
    uint8_t byte = 0b00000010;
    
    //Should print 2
    printf("Decimal=%d\n", byte);
    
    //clear bit 1
    byte &= ~(1<<1);
    
    //set bit 0
    byte |= (1<<0);
    
    //Should print 1
    printf("Decimal=%d\n", byte);
    
    //Inverse byte
    byte = ~byte;
    
    //Should print 254
    printf("Inverse=%d\n", byte);
    
    //Reverse byte
    uint8_t rev_byte = 0x00;
    byte = 0b00000010;
    rev_byte = ((byte & 0x01) << 7) | ((byte & 0x02) << 5) | 
               ((byte & 0x04) << 3) | ((byte & 0x08) << 1) |
               ((byte & 0x10) >> 1) | ((byte & 0x20) >> 3) |
               ((byte & 0x40) >> 5) | ((byte & 0x80) >> 7);
    
    //Should print 64
    printf("Reverse=%d\n", rev_byte);
    
    return 0;
}
