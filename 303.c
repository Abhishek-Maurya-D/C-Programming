// Chapter - 21 [B] - (h)

#include<stdio.h>
int main()
{
    unsigned int a;
    printf("Enter the Number: ");
    scanf("%u", &a);
    a=a<<24;
    a=a>>24;
    if( ((a&8)==0) && ((a&32)==0) )
    {
        a=(a|40);
        printf("%u",a);
    }
    else
        printf("Not Applicable to that Number");
    return 0;
}