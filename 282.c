// Union

#include<stdio.h>
int main()
{
    union u
    {
        short int i; char ch[2];
    };
    union u key;
    key.i = 512;
    printf("key.i = %d\n", key.i);
    printf("key.ch[0]=%d\n",key.ch[0]);
    printf("key.ch[2] = %d", key.ch[1]);
}