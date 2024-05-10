// Accessing array elements in different ways

#include<stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i;
    for (i=0;i<=5;i++)
    {
        printf("Address = %u\n",&num[i]);
        printf("Element = %d %d %d %d\n",num[i], *(num+i), *(i+num), i[num]);
    }
    return 0;
}