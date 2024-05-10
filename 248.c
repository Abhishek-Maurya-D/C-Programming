#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs=fopen("245.c","r");
    if(fs==NULL)
    {
        puts("Cannot open Source File");
        exit(1);
    }
    ft=fopen("256.c","w");
    if(ft==NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit(2);
    }
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        else
            fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    return 0;
}