// X-OR Operator

#include<stdio.h>
int main()
{
    unsigned char b = 0x32;
    b = b ^ 0x0C;
    printf("%#X\n", b);
    b = b ^ 0x0C;
    printf("%#X\n",b);
    return 0;
}