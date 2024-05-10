// Chapter - 19 [B] - (c)
// link with 308.c
// link with 291.c
// link with 292.c


#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *f1, *f2, *fn;
    f1 = fopen("291.c", "r");
    if(f1==NULL)
    {
        puts("File can't be open.\n");
        exit(1);
    }
    f2 = fopen("292.c", "r");
    if(f2 == NULL)
    {
        puts("File can't be open.\n");
        fclose(f1);
        exit(2);
    }
    fn = fopen("308.c","w");
    if(fn == NULL)
    {
        puts("New file can't be open.\n");
        fclose(f1);
        fclose(f2);
        exit(3);
    }
    char c1, c2;
    c1=fgetc(f1);
    c2=fgetc(f2);
    while(c1!=EOF || c2!=EOF)
    {
        while(c1!='\n' && c1!=EOF)
        {
            fputc(c1,fn);
            c1 = fgetc(f1);
        }
        fputc('\n',fn);
        while(c2!='\n' && c2!=EOF)
        {
            fputc(c2,fn);
            c2=fgetc(f2);
        }
        fputc('\n',fn);
        c1 = fgetc(f1);
        c2=fgetc(f2);

    }
    fclose(f1);
    fclose(f2);
    fclose(fn);
    return 0;
}