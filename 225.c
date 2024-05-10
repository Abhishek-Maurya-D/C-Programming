// Usage of an array of structures
#include<stdio.h>
int main()
{
    struct book{
        char name; float price; int pages;
    };
    struct book b[10];
    int i; int dh;
    for(i=0; i<=9; i++)
    {
        printf("Enter Name, Price and Pages \n");
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
        while((dh=getchar())!='\n')
            ;   // This while loop is use for clearing the buffer
    }
    for(i=0; i<=9; i++)
        printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);
    return 0;
}