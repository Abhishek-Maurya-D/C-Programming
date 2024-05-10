// driver.c
// Link with functio.cpp
// Link with functio.h


#include<stdio.h>
#include"function.h"
int main()
{
    int num;
    num = fun(10, 20, 30);
    printf("Returned value = %d\n",num);
    return 0;
}