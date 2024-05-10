// Chapter = 21 [B] - (c)

#include<stdio.h>
typedef unsigned short int abc;
int checkbits(abc x, int q, int n);
abc a, b,c;
int main()
{
    int p;
    printf("Enter the Number: ");
    scanf("%hu", &a);
    p= checkbits(a,3,7);
    if(p&1 || p&3 || p&7 || p&15 || p&31 || p&63 || p&127 || p&255 || p&511 || p&1023 || p%2027 || p&4095 || p&8191 || p&16383 || p&32767 || p&65535)
        printf("True");
    else
        printf("False");
    return 0;
}
int checkbits(abc x, int q, int n)
{
    b= a<<q;
    c= (b>>(q+n+1));
    return c;
}