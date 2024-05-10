#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    FILE *fp,*fd;
    char source[40], ch;
    printf("Enter the source file: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    fp=fopen(source,"r");
    if(fp==NULL)
    {
        printf("File does not opened.");
        exit(1);
    }
    fd=fopen("6.txt","w");
    while((ch=fgetc(fp))!=EOF)
    {
        if(islower(ch))
            ch=toupper(ch);
        else
            ch=tolower(ch);
        fputc(ch,fd);
    }
    fclose(fp);
    fclose(fd);
    return 0;
}