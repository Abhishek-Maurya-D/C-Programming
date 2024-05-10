// Two methods of taking the full name


// #include<stdio.h>
// int main()
// {
//     char name[25];
//     printf("Enter the full Name: ");
//     scanf("%[^\n]s", name);
//     puts(name);
//     return 0;
// }


#include<stdio.h>
int main()
{
    char name[25];
    printf("Enter Your Full Name: ");
    gets(name);
    puts("Hello!");
    puts(name);
    return 0;
}