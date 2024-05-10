// Chapter - 18
// [C] - (a)

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: \n");
    gets(str);
    // scanf("%s",str);  Wrong way of getting the string having inbetween spaces
    puts(str);
    return 0;
}

// [C] - (b)
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    // ch=getchar();
    getchar(ch);// wrong way of doing 
    // scanf("%s",&ch);
    printf("%c",ch);
    return 0;
}

// [C] - (c)
