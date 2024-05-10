#include<stdio.h>
int main()
{
    char ch;
    printf("Type any Alphabet: ");
    ch = getchar(); // Must be followed by enter key
    printf("You typed:- ");
    putchar(ch);
    return 0;
}