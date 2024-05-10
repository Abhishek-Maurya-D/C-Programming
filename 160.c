//  Chapter 13 [B]-(b)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,count=0; // declaration of size of the array
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in the array: ");
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]==p[n-i])
            count++;
    }
    printf("Number of values equal to from first to the end %d",count);
    return 0;
}