// Most important concept


#include <stdio.h>
#include <string.h>
int main()
{
    char  card[17];
    int evenc[9], oddc[9], esum = 0, osum = 0, sum, n=1;
    printf("Enter the Credit Card Number: ");
    scanf("%s", card);
    for (int i = 0; i < 16; i++)
        card[i] -= 48;
    for(int i=0; i<8; i++)
        evenc[i]=(card[i+i]*2);
    for(int j=0; j<8; j++)
    {
        oddc[j]=card[j+n];
        n++;
    }
    for(int i=0; i<8; i++)
    {
        if(evenc[i]>10 || evenc[i]==10)
            evenc[i]=evenc[i]-9;
    }
    for(int j=0; j<8; j++)
        esum=esum+evenc[j];
    for(int j=0; j<8; j++)
        osum=osum+oddc[j];
    sum=esum+osum;
    if(sum%10==0)
        printf("Correct Card Number\n");
    else
        printf("Incorrect Card Number\n");
    return 0;
}