// Compliment to 277.c

#include<stdio.h>
# define Male 0;
# define Female 1;
# define Single 0;
# define Married 1;
# define Divorced 2;
# define Widowed 3;
int main()
{
    struct employee
    {
        unsigned gender : 1; unsigned mar_stat:2;
        unsigned hobby : 3; unsigned scheme: 4;
    };
    struct employee e;
    e.gender = Male;
    e.mar_stat = Divorced;
    e.hobby = 5;
    e.scheme = 9;
    printf("Gender = %d\n", e.gender);
    printf("Marital status = %d\n", e.mar_stat);
    printf("Bytes occupied by e = %d\n", sizeof(e));
    return 0;
}