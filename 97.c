// Very important concept
// Chapter 8

// [A]-(a)
// #include<stdio.h>
// int addmult(int, int);
// int main()
// {
//     int i=3, j=4, k, l;
//     k = addmult(i,j);
//     l = addmult(i,j);
//     printf("%d %d\n",k,l);
//     return 0;
// }
// int addmult(int x, int y)
// {
//     int u, v;
//     u=x+y;
//     v=x*y;
//     return(u,v);
// }



// [A]-(b)
// #include<stdio.h>
// void message();
// int main()
// {
//     int a;
//     message();
//     return 0;
// }
// void message()
// {
//     printf("Learn from him online at ykanerkar.com\n");
// }


// [A]-(c)
// #include<stdio.h>
// char printit(float,char);
// int main()
// {
//     float a=15.5;
//     char ch='C';
//     printit(a,ch);
//     return 0;
// }
// char printit(float a, char ch)
// {
//     printf("%f %c\n", a, ch);
// }


//[A]-(d)
#include<stdio.h>
void let_us_C();
int main()
{
    let_us_C();
    return 0;
}
void let_us_C()
{
    printf("Learn C online....\n");
    printf("At ykanetkar.com\n");
}