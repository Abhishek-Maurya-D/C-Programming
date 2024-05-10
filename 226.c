#include<stdio.h>
int main()
{
    struct book{
        char name[10]; float price; int pages;
    };
    struct book b1={"Basic", 130.00, 550};
    struct book b2={"Physics", 150.80, 800};
    struct book b3={0};
    printf("%s %f %d\n", b1.name, b1.price, b1.pages);
    printf("%s %f %d\n", b2.name, b2.price, b2.pages);
    printf("%s %f %d\n", b3.name, b3.price, b3.pages);
    return 0;
}