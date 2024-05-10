#include<stdint.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char *string = "abhishek";
    int length = strlen(string);
    for(int i=0; i<length ; i++)
        printf("String[%d] = %c\n",i, string[i]);
    int _int = 2147483647;
    // size_t _size_t_ = 21474836474;
    // printf("_size_t_ = %zu\n",_size_t_);
    printf("_int = %d\n", _int);
    printf("Size_Max: %zu\n", __SIZE_MAX__);
    return 0;
}