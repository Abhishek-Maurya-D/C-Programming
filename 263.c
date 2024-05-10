// File name: util.c
// redirecting the output
// Output at command prompt
#include<stdio.h>
int main()
{
    char ch;
    while((ch=fgetc(stdin))!=EOF)
        fputc(ch, stdout);
    return 0;
}