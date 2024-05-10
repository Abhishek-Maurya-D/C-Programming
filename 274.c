#include<stdio.h>
#define _BV(x) (1<<x)
// void showbits(unsigned char n);
int main()
{
    unsigned char color, i;
    int c;
    char *rbcolor[] = {"Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red"};
    printf("Enter any number: ");
    scanf("%d",&c);
    color = (unsigned char) c;
    // printf("%c", color);
    printf("Colors represented are: \n");
    for(i = 0; i<=6; i++)
    {
        if((color & _BV(i))==_BV(i))
            printf("%s\n",rbcolor[i]);
    }
    return 0;
}