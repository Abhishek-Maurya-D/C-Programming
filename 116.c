// Most Important Concept
// Find Prime Factors of a number recursively

#include<stdio.h>
void factorize(int , int );
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Prime Factors are: ");
    factorize(num,2);
    return 0;
}
void factorize(int n, int i)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
        else
            i++;
        factorize(n,i);
    }
}