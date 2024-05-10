#include<stdio.h>
int main()
{
    char name[3][100];
    float price[3];
    int pages[3];
    printf("Enter Names, Prices and No. of Pages of 3 Books: \n");
    for(int i=0; i<=2; i++)
        scanf("%s %f %d", &name[i], &price[i], &pages[i]);
    printf("And this is what you entered \n");
    for(int i=0; i<3; i++)
        printf("%s %f %d\n", name[i], price[i], pages[i]);
    return 0;
}