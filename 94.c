#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    int fact;
    printf("Enter a Number ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of %d is %d\n", num,fact);
    return 0;
}

int factorial(int num)
{
    int i;
    int fact=1;
    for(i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}