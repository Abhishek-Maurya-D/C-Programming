#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("Trial","w");
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ferror(fp))
        {
            perror("Trial");
            // printf("Trial");
            break;
        }
        else
            printf("%c",ch);
    }
    fclose(fp);
    return 0;
}