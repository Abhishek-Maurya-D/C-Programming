// To turn 3 numbers in a circular order
#include<stdio.h>
void cirsh(int *, int *, int *);
int main()
{
    int x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&x, &y, &z);
    cirsh(&x, &y, &z);
    printf("Numbers after Circular Shift\n");
    printf("x=%d y=%d z=%d",x,y,z);
    return 0;
}
void cirsh(int *a, int *b, int *c)
{
    int t;
    t=*a;
    *a=*b;
    *b=*c;
    *c=t;
}