// Important to remember

#include<stdio.h>
int main()
{
    char ch = 'z';
    int i = 20;
    float a = 12.55;
    char s[] = "Hello there !";
    printf("%c %d %7f\n",ch, ch, ch);
    printf("%s %d %f\n", s, s, s);
    printf("%c %d %f\n", i, i, i);
    printf("%f %d\n", a, a);
    return 0;
}