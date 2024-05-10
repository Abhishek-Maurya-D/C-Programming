#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the Array: ");
        scanf("%d",&p[i]);
    }
    int a=p[0];
    for(int i=0;i<n;i++)
    {
        if(a>p[i])
            a=p[i];
    }
    printf("Smallest Value is %d",a);
}