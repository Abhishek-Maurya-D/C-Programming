// To show that the register data type's address is not not printable 

#include<stdio.h>
int main()
{
    register int i=1;
    int *j;
    j=&i;
    printf("%d",j);
    return 0;
}