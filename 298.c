// Chapter = 21 [B] - (d)

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    num=num<<24;
    num=num>>24;
    if((num&8)==8)
        printf("Third(3rd) bit is on\n");
    else
        printf("Third(3rd) bit is not on\n");
    if((num&128)==128)
        printf("Seventh(7th) bit is on\n");
    else
        printf("Seventh(7th) bit is not on\n");
    if((num&64)==64)
        printf("Sixth(6th) bit is on\n");
    else
        printf("Sixth(6th) bit is not on\n");
    return 0;
}