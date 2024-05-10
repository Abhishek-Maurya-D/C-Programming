#include<stdio.h>
void primenum(int);
int main()
{
    int num;
    printf("Enter the Number ");
    scanf("%d",&num);
    primenum(num);
    return 0;
}
void primenum(int num)
{
    if((num%400==0) || (num%100!=0 && num%4==0))
        printf("Entered Number is the Prime Number");
    else
        printf("Entered Number is not the Prime Number");
}