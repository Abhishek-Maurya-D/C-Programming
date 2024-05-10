#include<math.h>
#include<stdio.h>
int main()
{
    float p,r,n,q,a;
    int i;
    for(i=1;i<=10;i++)
    {
        printf("Enter Principle Amount ");
        scanf("%f",&p);
        printf("Enter Rate of Interest ");
        scanf("%f",&r);
        printf("Enter Time Period(in year) ");
        scanf("%f",&n);
        printf("Enter Number of times the value is compound annually ");
        scanf("%f",&q);
        a=p*(pow((1+r/q),n*q));
        printf("Amount = %f\n",a);
    }
    return 0;
}