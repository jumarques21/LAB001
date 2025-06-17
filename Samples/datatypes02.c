// C Program to print size of
// different data type in C
#include <stdio.h>
#include <stdint.h>
// #include <ctype.h>

/* Returns 1 if type of var is signed, else 0. */
#define ISVAR_SIGNED(V) ((typeof(V))-1 < (typeof(V))0)

int8_t VAR_A;

int main()
{
    printf("The size of uint8_t data type : %d\n", sizeof(VAR_A));
    printf("The size of int8_t data type : %d\n", sizeof(int8_t));
    printf("The size of uint16_t data type : %d\n", sizeof(uint16_t));
    printf("The size of int16_t data type : %d\n", sizeof(int16_t));
    printf("The size of uint32_t data type : %d\n", sizeof(uint32_t));
    printf("The size of int32_t data type : %d\n", sizeof(int32_t));
    printf("The size of uint64_t data type : %d\n", sizeof(uint64_t));
    printf("The size of int64_t data type : %d\n", sizeof(int64_t));

    printf("Is signed?: ");
    // C Short Hand If Else
    (ISVAR_SIGNED(VAR_A)) ? printf("yes") : printf("no");
    return 0;
}
