// Chapter - 21 [B] - (g)

#include<stdio.h>
int main()
{
    unsigned int a;
    printf("Enter the Number: ");
    scanf("%u", &a);
    a=a<<24;
    a=a>>24;
    a=(a|85);
    printf("Number after setting its odd bits to 1: %u", a);
    return 0;
}