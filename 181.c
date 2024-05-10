// Chapter - 14 Multidimensional Arrays
// [A]-(a)


// #include<stdio.h>
// int main()
// {
//     int n[3][3]={
//                     {2,4,3}, {6,8,5}, {3,5,1}
//                 };
//     printf("%d %d %d\n",*n, n[1][1], n[2][2]);
//     return 0;
// }


// Chapter - 14 Multidimensional Arrays
// [A]-(b)


// #include<stdio.h>
// int main()
// {
//     int n[3][3]={
//                     {2,4,3}, {6,8,5}, {3,5,1}
//                 };
//     int i, *ptr;
//     ptr=&n[0][0];
//     for (int i=0;i<=8;i++)
//         printf("%d\n", *(ptr+i));
//     return 0;
// }



// Chapter - 14 Multidimensional Arrays
// [A]-(c)



#include<stdio.h>
int main()
{
    int n[3][3]={
                    2,4,3,6,8,5,3,5,1
                };
    for(int i=0; i<=2; i++)
        for(int j=0; j<=2; j++)
            printf("%d %d\n",n[i][j], *(*(n+i)+j));
    return 0;
}