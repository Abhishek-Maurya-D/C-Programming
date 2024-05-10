// chapter - 19 [B] = (d)-1
// link with 313.c

#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *f1, *f2;
    f1=fopen("291.c","r");
    if(f1 == NULL)
    {
        printf("File can't be open.");
        exit(1);
    }
    f2 = fopen("313.c","w");
    if(f2 == NULL)
    {
        printf("File can't be open.");
        fclose(f1);
        exit(2);
    }
    char ch;
    ch=fgetc(f1);
    while(ch!=EOF)
    {
        fputc(ch,f2);
        fputs("+128",f2);
        ch = fgetc(f1);
    }
    fclose(f2);
    fclose(f1);
    return 0;
}