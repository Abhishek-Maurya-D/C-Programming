#include<stdio.h>
int main()
{
    char footballer[40];
    puts("Enter Name: ");
    gets(footballer); // Sends base address of array
    puts("Happy Footballing!");
    puts(footballer);
    char str[20];
    puts("Enter a String: ");
    fgets(str, 20, stdin);
    puts(str);
    return 0;
}