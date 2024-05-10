// Count chars, spaces, tabs and newlines in a file
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int nol=0, not=0, nob=0, noc=0;
    fp=fopen("245.c","r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        noc++;
        if(ch == ' ')
            nob++;
        if(ch == '\n')
            nol++;
        if(ch == '\t')
            not++;
    }
    fclose(fp);
    printf("Number of Characters = %d\n", noc);
    printf("Number of Blanks = %d\n", nob);
    printf("Number of Tabs = %d\n", nob);
    printf("Number of Lines = %d\n", nol);
    return 0;
}