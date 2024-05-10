// Function returning pointers
#include<stdio.h>
int *fun();
int main()
{
    int *p;
    p = fun();
    printf("%d\n",fun());
    printf("%d\n", p);
    int *j = fun();
    printf("%d\n",j);
    return 0;
}
int *fun()
{
    static int i = 20;
    return (&i);
}