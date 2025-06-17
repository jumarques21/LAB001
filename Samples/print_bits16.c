#include <stdio.h>
#include <stdint.h>

void print_bits(uint16_t x);

int main()
{
    uint16_t a;
    a = 0b1000010000000000;
    print_bits(a);
}

void print_bits(uint16_t x)
{
    uint16_t mask = 0b1000000000000000;
    uint16_t i;
    for (i = 1; i <= 16; ++i)
    {
        putchar(x & mask ? '1' : '0');
        mask >>= 1; // MSB to the LSB's position
        if (i % 8 == 0)
        { // output space after 8 bits
            putchar(' ');
        }
    }
    putchar('\n');
}
