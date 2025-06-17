#include <stdio.h>
#include <stdint.h>

void print_bits(uint8_t x);
// https://www.learn-c.org/en/Bitmasks
int main()
{
    uint8_t a,n;
    a = 0b00000000;
    n = 0;
    
    // Set bit n
    a |= 1 << n;
    print_bits(a);

    // Clear  bit n
    a &= ~(1 << n);
    print_bits(a);

    // Toggle bit n
    a ^= 1 << n;
    print_bits(a);

    // Check bit n
    putchar(a & (1 << n) ? '1' : '0');


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
    putchar('\n');
}