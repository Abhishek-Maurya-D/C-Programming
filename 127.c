// Chapter-11 Data Types 


// [B]-(a)
// #include<stdio.h>
// int main()
// {
//     long num = 2;
//     printf("%ld\n",num);
//     return 0;
// }


// [B]-(b)
// #include<stdio.h>
// int main()
// {
//     char ch = 200;
//     printf("%c\n",ch);
//     return 0;
// }


// [B]-(c)
// #include<stdio.h>
// int main()
// {
//     float a = 25.34454;
//     double b = 25;
//     printf("%lf %lf\n",a,b);
//     return 0;
// }


// [B]-(d)
#include<stdio.h>
static int y;
int main()
{
    static int z;
    z=5;
    printf("%d %d\n",y,z);
    return 0;
}