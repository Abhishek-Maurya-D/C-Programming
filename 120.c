// [B]-(b)

#include<stdio.h>
int nsum(int);
int main()
{
    int num, sum;
    printf("Enter the number upto which you want to calculate the sum: ");
    scanf("%d",&num);
    sum=nsum(num);
    printf("Sum is %d",sum);
    return 0;
}
int nsum(int num)
{
    int sum=0;
    if(num!=0)
        sum=nsum(num-1)+num;
    return (sum);
}