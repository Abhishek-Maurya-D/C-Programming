#include<stdio.h>
#include "interest.h"
int main()
{
    int p,r,t,si,a;
    printf("Enter the Principle Amount of Interest: ");
    scanf("%d",&p);
    printf("Enter the Rate of Interest: ");
    scanf("%d",&r);
    printf("Enter the Time Period of Interest: ");
    scanf("%d",&t);
    si=SI(p,r,t);
    printf("The Simple Interest is = %d\n",si);
    a=p+si;
    printf("The Amount is %d\n",a);
    return 0;
}