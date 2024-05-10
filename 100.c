// To print the prime factors of a number


#include<stdio.h>
void prime(int num);
void pfact(int num);
int main()
{
    int num;
    printf("Enter the Number ");
    scanf("%d",&num);
    // printf("%d\t",1);
    pfact(num);
    return 0;
}
void pfact(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            prime(i);
            // printf("%d",i);
        }
    }
}
void prime(int i)
{
    int j=0;
    for(int k=2;k<i;k++)
    {
        if(i%k==0)
            j++;
    }
    if(j==0)
        printf("%d\t",i);
}