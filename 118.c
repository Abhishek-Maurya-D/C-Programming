// Chapter = 10 Recursion Exercise

// [A]-(a)
// #include<stdio.h>
// int main()
// {
//     printf("I C, you C, We all C\n");
//     main();
//     return 0;
// }

// [A]-(b)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    i++;
    if(i<=5)
    {
        printf("C adds wings to your thoughts\n");
        // exit(0);
        main();
    }
    return 0;
}