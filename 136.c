#include <stdio.h>
#include <stdlib.h>
#define India 1
#define Us 2
#define Pak 3
#define Other 4
#define Country Other
#define Age 18
int main()
{
    printf("Code for the Universe\n");
#if Country == India
    printf("Code for the India\n");
#elif Country == Us
    printf("Code for the Us\n");
#elif Country == Pak
    printf("Code for the Pak\n");
#else
    printf("Code for the Other Country\n");
#endif
    return 0;
}