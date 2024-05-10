// Most Important Concept
// Flexible array size
// Implementation of Array using malloc() function

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max, i, *p;
    printf("Enter array size: ");
    scanf("%d",&max);
    p=(int *)malloc(max*sizeof(int));
    // printf ("p= %d\n",p);
    for (i=0;i<max;i++)
    {
        p[i]=i*i;
        printf("%d\n",p[i]);
    }
    free(p);
    return 0;
}