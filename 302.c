// Chapter - 21 [B] - (h)

#include<stdio.h>
int main()
{
    unsigned int a;
    printf("Enter the Number: ");
    scanf("%u", &a);
    a=a<<24;
    a=a>>24;
    if( ((a&8)==8) && ((a&32)==32) )
    {
        a=(a&215);
        printf("%u",a);
    }
    else
        printf("Not Applicable to that Number");
    return 0;
}