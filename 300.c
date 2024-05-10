#include<stdio.h>
int main()
{
    unsigned int num, n, nu;
    printf("Enter the Number: ");
    scanf("%u",&num);
    num=num<<24;
    num=num>>24;
    n = num<<28;
    n = n>>24;
    nu = num>>4;
    num = (nu | n);
    printf("The number after reversing last 4 bits to its 2nd last 4 bits: %u", num);
    return 0;
}