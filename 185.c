#include<stdio.h>
int main()
{
    int x[3][5]={
                    {1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15}
                }; 
    int *n;
    n=&x[0][0];
    // printf("%d",*(*(x+2)+1));
    // printf("%d",*(*x+2)+5);
    // printf("%d",*(*(x+1)));
    // printf("%d",*(*(x)+2)+1);
    // printf("%d",*(*(x+1)+3));
    // printf("%d",*n);
    // printf("%d",*(n+5)+1);
    printf("%d",++*n);
    return 0;
}