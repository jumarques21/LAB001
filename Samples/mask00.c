#include <stdint.h>
#include <stdio.h>

// Definição da estrutura do registrador.
struct GYA_BITS
{                    // bits description
    uint8_t MMW : 3; // Mask: 0b00000111
    uint8_t QX : 2;  // Mask: 0b00011000
    uint8_t LU : 2;  // Mask: 0b01100000
    uint8_t M : 1;   // Mask: 0b10000000
};

union GYA_REG
{
    uint8_t all;
    struct GYA_BITS bit;
};

// Definição das máscaras.
#define MMW_MASK 0b00000111 // shifted: 0
#define QX_MASK 0b00011000  // shifted: 3
#define LU_MASK 0b01100000  // shifted: 5
#define M_MASK 0b10000000   // shifted: 7

#define MMW_SHIFT 0 // bit shift: 0
#define QX_SHIFT 3  // bit shift: 3
#define LU_SHIFT 5  // bit shift: 5
#define M_SHIFT 7   // bit shift: 7

int main()
{
    // Atribuição dos valores
    printf("Valor de MMW_MASK: %d\n", MMW_MASK);

    union GYA_REG GYA;
    GYA.all = 0;
    GYA.bit.MMW = 0b101; //
    //  GYA.bit.QX = 0b10;   //
    //  GYA.bit.LU = 0b11;   //
    //  GYA.bit.M = 0b1;     //
    // Toggle the bit using XOR
    GYA.all = GYA.all ^ MMW_MASK;
    printf("Toggle Valor de GYA.bit.MMW: %d\n", GYA.bit.MMW);

    // Set the bit using OR
    GYA.all = GYA.all | MMW_MASK;
    printf("Set Valor de GYA.bit.MMW: %d\n", GYA.bit.MMW);

    // Clear the bit using AND
    GYA.all = GYA.all & ~MMW_MASK;
    printf("Clear Valor de GYA.bit.MMW: %d\n", GYA.bit.MMW);

    // Impressão dos valores
    printf("Valor de GYA.bit.MMW: %d\n", GYA.bit.MMW);
    printf("Valor de GYA.bit.QX: %d\n", GYA.bit.QX);
    printf("Valor de GYA.bit.LU: %d\n", GYA.bit.LU);
    printf("Valor de GYA.bit.M: %d\n", GYA.bit.M);
    printf("Valor de GYA.all: %d\n", GYA.all);

    return 0;
}