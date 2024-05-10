// Program to print the timing of a day

#include<stdio.h>
int main()
{
    printf("Timing\n");
    for(int i=1;i<=24;i++)
    {
        if(i>0 && i<12)
            printf("%d AM \n",i);
        if(i==12)
            printf("Noon at %d \n",i);
        if(i>12 && i<24)
            printf("%d PM \n",i);
        if(i==24)
            printf("Mid-Night at %d \n",i);
    }
    return 0;
}