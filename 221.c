#include<stdio.h>
#include<string.h>
int main()
{
    char sen[100];
    int no=0;
    printf("Enter the Sentence: ");
    gets(sen);
    for(int i=0; i<strlen(sen); i++)
    {
        if((sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u' || sen[i]=='A' || sen[i]=='E' || sen[i]=='I' || sen[i]=='O' || sen[i]=='U') && (sen[i+1]=='a' || sen[i+1]=='e' || sen[i+1]=='i' || sen[i+1]=='o' || sen[i+1]=='u' || sen[i+1]=='A' || sen[i+1]=='E' || sen[i+1]=='I' || sen[i+1]=='O' || sen[i+1]=='U'))
            no++;
    }
    printf("The No. of occurance of two vowels toghter in a sentence is %d", no);
    return 0;
}