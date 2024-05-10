// Let us now write the program to print numbers from 1 to 10 in different ways.
// This time we would use a for loop instead of a while loop.
//(a)
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i=i+1)
//         printf("%d\n",i);
//     return 0;
// }
//(b)
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
//(c)
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     for(;i<=10;i++)
//         printf("%d\n",i);
//     return 0;
// }
//(d)
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     for(;i<=10;)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
//(e)
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=0;i++<10;)
//         printf("%d\n",i);
//     return 0;
// }
//(f)
#include<stdio.h>
int main()
{
    int i;
    for(i=0;++i<=10;)
        printf("%d\n",i);
    return 0;
}