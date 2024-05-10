// Storage Class


// [1]- Concept
// #include<stdio.h>
// int main()
// {
//     auto int i, j;
//     printf("%d %d\n",i,j);
//     return 0;
// }



// [2]- Concept
// #include<stdio.h>
// int main()
// {
//     auto int i=1;
//     {
//         auto int i=2;
//         {
//             auto int i=3;
//             printf("%d\n",i);
//         }
//         printf("%d\n",i);
//     }
//     printf("%d\n",i);
//     return 0;
// }




// [3]- Concept    =====      Most Important Concept
// shows the difference between static and auto storage class

// #include<stdio.h>
// void increment();
// int main()
// {
//     increment();
//     increment();
//     increment();
//     return 0;
// }
// void increment()
// {
//     auto int i = 1;
//     static int j = 1;
//     i++;
//     j++;
//     printf("%d %d\n", i, j);
// }





// [4]- Concept
// #include<stdio.h>
// int x=21;
// int main()
// {
//     extern int y;
//     printf("%d %d\n", x, y);
//     return 0;
// }
// int y = 31;





// [5]- Concept
#include<stdio.h>
int x=10;
void display();
int main()
{
    int x=20;
    printf("%d\n",x);
    display();
    return 0;
}
void display()
{
    printf("%d\n",x);
}