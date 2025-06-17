// C Program to print size of
// different data type in C
#include <stdio.h>

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned short int uint16;
typedef signed short int int16;
typedef unsigned int uint32;
typedef signed int int32;
typedef unsigned long long int uint64;
typedef long long int int64;

/* Returns 1 if T is signed, else 0. */
#define INTTYPE_SIGNED(T) ((T) - 1 < (T)0)

int main()
{
    printf("The size of uint8 data type : %d\n", sizeof(uint8));
    printf("The size of int8 data type : %d\n", sizeof(int8));
    printf("The size of uint16 data type : %d\n", sizeof(uint16));
    printf("The size of int16 data type : %d\n", sizeof(int16));
    printf("The size of uint32 data type : %d\n", sizeof(uint32));
    printf("The size of int32 data type : %d\n", sizeof(int32));
    printf("The size of uint64 data type : %d\n", sizeof(uint64));
    printf("The size of int64 data type : %d\n", sizeof(int64));

    printf("Is signed?: ");
    // C Short Hand If Else
    (INTTYPE_SIGNED(uint8)) ? printf("yes") : printf("no");
    return 0;
}
