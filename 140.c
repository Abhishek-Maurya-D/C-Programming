// Pragma startup and exit

#include<stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("Inside main\n");
    return 0;
}
void fun1()
{
    printf("Inside fun1\n");
}
void fun2()
{
    printf("Inside fun2\n");
}





// #include <stdio.h>
// #include <stdlib.h>

// void fun1();
// void fun2();

// int main()
// {
//     printf("Inside main\n");

//     atexit(fun2); // Register fun2 to be called at program exit

//     fun1(); // Call fun1 directly

//     return 0;
// }

// void fun1()
// {
//     printf("Inside fun1\n");
// }

// void fun2()
// {
//     printf("Inside fun2\n");
// }
