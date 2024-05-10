#include<stdio.h>
#include<string.h>
int main()
{
    enum department
    {
        assembly, manufacture, accounts, stores
    };
    struct employee
    {
        char name[30]; int age; enum department dept;
    };
    struct employee e;
    strcpy(e.name, "Abhishek Maurya");
    e.age = 19;
    e.dept = assembly;
    printf("Name = %s\n", e.name);
    printf("Age = %d\n", e.age);
    printf("Deparment = %d\n", e.dept);
    if(e.dept == accounts)
        printf("%s is an accountant\n", e.name);
    else
        printf("%s is not an accountant\n", e.name);
    return 0;
}