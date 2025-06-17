#include <stdio.h>
#include <limits.h>
// https://en.wikibooks.org/wiki/C_Programming/limits.h

int main()
{
   printf("The value of CHAR_BIT: %d\n", CHAR_BIT);
   printf("The value of SCHAR_MIN: %d\n", SCHAR_MIN); // int8_t
   printf("The value of SCHAR_MAX: %d\n", SCHAR_MAX); // int8_t
   printf("The value of UCHAR_MAX: %u\n", UCHAR_MAX); // uint8_t
   printf("The value of SHRT_MIN: %d\n", SHRT_MIN);   // int16_t
   printf("The value of SHRT_MAX: %d\n", SHRT_MAX);   // int16_t
   printf("The value of USHRT_MAX: %u\n", USHRT_MAX); // uint16_t
   printf("The value of INT_MIN: %d\n", INT_MIN);     // int32_t
   printf("The value of INT_MAX: %d\n", INT_MAX);     // int32_t
   printf("The value of UINT_MAX: %u\n", UINT_MAX);   // uint32_t
   return 0;
}
