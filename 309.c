#include<stdlib.h>
#include<stdio.h>
char encrypt(char);
char decrypt(char);
int main()
{
    FILE *f1, *f2, *f3, *f4;
    f1=fopen("291.c","r");
    if(f1 == NULL)
    {
        printf("File can't be open.");
        exit(1);
    }
    f2 = fopen("310.c","w");
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
        ch = encrypt(ch);
        fputc(ch,f2);
        ch = fgetc(f1);
    }
    fclose(f2);
    f3= fopen("310.c","r");
    f4 = fopen("311.c","w");
    if(f3==NULL)
    {
        printf("File can't be open.");
        exit(3);
    }
    char c;
    c = fgetc(f3);
    while(c!=EOF)
    {
        c = decrypt(c);
        fputc(c,f4);
        c = fgetc(f3);
    }
    fclose(f4);
    fclose(f1);
    fclose(f3);
    return 0;
}
char encrypt(char ch)
{
    switch(ch)
    {
        case 'a':
            return 'f';
        case 'b':
            return 'z';
        case 'c':
            return 'j';
        case 'd':
            return 'a';
        case 'e':
            return 'n';
        case 'f':
            return 'e';
        case 'g':
            return 'i';
        case 'h':
            return 'b';
        case 'i':
            return 'y';
        case 'j':
            return 'm';
        case 'k':
            return 'c';
        case 'l':
            return 's';
        case 'm':
            return 'g';
        case 'n':
            return 'r';
        case 'o':
            return 't';
        case 'p':
            return 'd';
        case 'q':
            return 'q';
        case 'r':
            return 'o';
        case 's':
            return 'u';
        case 't':
            return 'h';
        case 'u':
            return 'k';
        case 'v':
            return 'v';
        case 'w':
            return 'p';
        case 'x':
            return 'l';
        case 'y':
            return 'w';
        case 'z':
            return 'x';
        default: 
            return ch;
    }
}
char decrypt(char c)
{
    switch(c)
    {
        case 'f':
            return 'a';
        case 'z':
            return 'b';
        case 'j':
            return 'c';
        case 'a':
            return 'd';
        case 'n':
            return 'e';
        case 'e':
            return 'f';
        case 'i':
            return 'g';
        case 'b':
            return 'h';
        case 'y':
            return 'i';
        case 'm':
            return 'j';
        case 'c':
            return 'k';
        case 's':
            return 'l';
        case 'g':
            return 'm';
        case 'r':
            return 'n';
        case 't':
            return 'o';
        case 'd':
            return 'p';
        case 'q':
            return 'q';
        case 'o':
            return 'r';
        case 'u':
            return 's';
        case 'h':
            return 't';
        case 'k':
            return 'u';
        case 'v':
            return 'v';
        case 'p':
            return 'w';
        case 'l':
            return 'x';
        case 'w':
            return 'y';
        case 'x':
            return 'z';
        default: 
            return c;
    }
}