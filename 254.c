// Append contents of one file at the end of another

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fs, *ft;
    char source[200], target[200], str[80];
    puts("Enter source file name: ");
    gets(source);
    puts("Enter targets file name: ");
    gets(target);
    fs=fopen(source, "r");
    if(fs==NULL)
    {
        puts("Unable to open the file.");
        exit(0);
    }
    ft=fopen(target,"a");
    if(ft==NULL)
    {
        fclose(fs);
        puts("Unable to open target file.");
        exit(1);
    }
    while(fgets(str,79,fs)!=NULL)
        fputs(str,ft);
    printf("Appending file completed!");
    fclose(fs);
    fclose(ft);
    return 0;
}