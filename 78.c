// Program to print the multiplication table of the number entered by the user
#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the Number ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",num,i,num*i);
    return 0;
}