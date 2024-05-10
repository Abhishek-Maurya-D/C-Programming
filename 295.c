#include<stdio.h>
#include<math.h>
int convet(int );
int main()
{
    short unsigned int a[8];
    printf("1. Cricket\n");
    printf("2. Basketball\n");
    printf("3. Football\n");
    printf("4. Hockey\n");
    printf("5. Lawn Tennis\n");
    printf("6. Table Tennis\n");
    printf("7. Carom\n");
    printf("8. Chess\n");
    printf("Enter the no of times the game won by the team in each of the games given above(max 8 in bit numbers): \n");
    for(int j=0; j<8; j++)
    {
        scanf("%hu",&a[j]);
        a[j] = convet(a[j]);
    }
    int count=0;
    for(int m=0; m<8; m++)
    {
        if(a[m]>=5)
        count++;
    }
    printf("\n");
    printf("Number of Champions trophy won by the team: %d\n", count);
    return 0;
}
int convet(int p)
{
    p=((pow(2,3)*(p/1000)) + (pow(2,2)*((p/100)%10)) + (pow(2,1)*((p/10)%10)) + (p%10));
    return p;
}