// population of a place is increasing at the rate of 10 percent


#include<stdio.h>
int main()
{
    int p=100000,r;
    for(int i=1;i<=10;i++)
    {
        r=p*0.1;
        p=p+r;
        printf("Salary = %d\n",p);
    }
    return 0;
}