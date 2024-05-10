#include<string.h>
#include<stdio.h>
int main()
{
    char snt[100];
    printf("Enter the Sentence: ");
    gets(snt);
    int i=0,j;
    for(i; i<strlen(snt); i++)
    {
        if(snt[i]=='a' || snt[i]=='e' || snt[i]=='i' || snt[i]=='o' || snt[i]=='u' || snt[i]=='U' || snt[i]=='O' || snt[i]=='I' || snt[i]=='E' || snt[i]=='A')
        {
            for(j=i; j<strlen(snt); j++)
            {
                snt[j]=snt[j+1];
            }
            i--;
        }
    }
    puts(snt);
    return 0;
}