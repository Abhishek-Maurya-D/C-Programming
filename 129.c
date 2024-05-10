// Macro Pre-processor
#include<stdio.h>
#include<stdlib.h>
#define Limit 5
#define PI 3.14
#define Password "Abhi123@"
#define Display printf("Hellow World");
int main()
{
    int count;
    for(count=1;count<=Limit;count++)
        printf("%d\n",count);
    printf("PI = %f\n",PI);
    printf("%s\n",Password);
    Display
    return 0;
}