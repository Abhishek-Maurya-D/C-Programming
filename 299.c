// Chapter - 21 [B] = (e)

#include<stdio.h>
int main()
{
    short unsigned int a;
    printf("Enter the number: ");
    scanf("%hu", &a);
    a=a&34;
    printf("Number after bitwise operation is : %hu",a);
    return 0;
}