#include<stdio.h>
int main()
{
    char name[4][30], writer[4][20]; float price[4];
    for(int i=0; i<4; i++)
    {
        printf("Enter the Name, Writer's Name & Price: \n");
        scanf("%[^\n]s %[^\n]s %f", &name[i], &writer[i], &price[i]);
    }
    for(int i=0; i<4; i++)
        printf("%s %s %f", name[i], writer[i], price[i]);
    return 0;
}