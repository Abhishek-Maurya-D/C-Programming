// Most important concept explain


#include<stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    printf("%d %d %d %d\n", b, ++b, b, b);
    printf("%d %d %d %d\n", a, a++, a, a);
    // printf("%d %d %d\n", a, a++, ++a);
    return 0;
}