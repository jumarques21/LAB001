#include <stdio.h>
#include <stdint.h>

void print_bits(uint8_t x);

int main()
{
    uint8_t a;
    a = 0b10000100;
    print_bits(a);
}

void print_bits(uint8_t x)
{
    uint8_t mask = 0b10000000;
    uint8_t i;
    for (i = 1; i <= 8; ++i)
    {
        putchar(x & mask ? '1' : '0');
        mask >>= 1; // MSB to the LSB's position
    }
}
