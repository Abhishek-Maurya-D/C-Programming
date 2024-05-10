#include<stdio.h>
int main()
{
    int i=25, j=25;
    int *pi=&i, *pj=&j;
    *pj=j+5;
    j=*pj+5;
    pj=pj;
    *pi=i+j;
    printf("%d", *pi);
    return 0;
}