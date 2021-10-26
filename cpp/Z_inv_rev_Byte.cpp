#include <iostream>
#include <cstdint>

void reverseByte(uint8_t a);
void invertByte(uint8_t a);

int main()
{
    uint8_t og_byte = 0b11000000; //53
    
    std::cout << "OG byte is: " << (int)og_byte << std::endl;
    
    invertByte(og_byte);
    reverseByte(og_byte);
    
    return 0;
}

void reverseByte(uint8_t a)
{
    uint8_t rev_byte = 0x00;
    
    rev_byte = ((a & 0x01) << 7) | ((a & 0x02) << 5) |
               ((a & 0x04) << 3) | ((a & 0x08) << 1) |
               ((a & 0x10) >> 1) | ((a & 0x20) >> 3) |
               ((a & 0x40) >> 5) | ((a & 0x80) >> 7);
               
     std::cout << "Reversed byte is: " << (int)rev_byte << std::endl;
}

void invertByte(uint8_t a)
{
    uint8_t inv_byte = 0x00;
    
    inv_byte = ~a;
    
    std::cout << "Inverted byte is: " << (int)inv_byte << std::endl;
}
