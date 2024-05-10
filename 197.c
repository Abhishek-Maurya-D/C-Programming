#include<stdio.h>
int main()
{
    char str1[12]="Hello", str2[20]="Hi";
    char *p="Hello", *s="Hi";
    // str1="Adieu";           error, constant pointer cannot change
    // *str1='An';             error, due to multiple character taking
    // str1=str2;              error, constant pointer cannot change
    // str1++;                 error, constant pointer cannot change
    // *str1 = 'Z';               //  work, because string is not constant 
    // p="Adieu";                 //  work, because string is not constant
    // p=s;                      //  work, because string is not constant
    // p++;                      //  work, because string is not constant
    // *p='M';                   // error, constant pointer cannot change
    // while(*p!='\0')
    // {
    //     printf("%c",*p);
    //     p++;
    // }
    printf("%d",*p);
    // puts(p);
    return 0;
}