#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char name[100], n[3];
    printf("Enter the full name: ");
    gets(name);
    n[0]=name[0];
    int j=1;
    for(int i=0; i<strlen(name); i++)
    {
        if(isspace(name[i])){
            n[j]=name[i+1];
            j++; 
        }
    }
    n[j]='\0';
    puts(n);
    return 0;
}