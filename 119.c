// A positive integer is entered though the keyboard, write a function to find the binary equivlent of this number.
// (1) Without using Recursion
// (2) Using Recursion


// 1.
// #include<stdio.h>
// int main()
// {
//     int num, rem=0, binary=0;
//     printf("Enter the number to find binary equivalent: ");
//     scanf("%d",&num);
//     int i=1;
//     for(i=1;num!=1;i=i*10)
//     {
//         rem=num%2;
//         binary=rem*i+binary;
//         num=num/2;
//     }
//     binary=num*i+binary;
//     printf("\nBinary Equivalent is %d\n",binary);
//     return 0;
// }

// 2.
#include<stdio.h>
int bin(int);
int i=1,binary=0;
int main()
{
    int num, binary;
    printf("Enter the number to find binary equivalent: ");
    scanf("%d",&num);
    binary=bin(num);
    printf("\nBinary Equivalent is %d\n",binary);
    return 0;
}
int bin(int num)
{
    int rem;
    if(num!=1)
    {
        rem=num%2;
        binary=rem*i+binary;
        i=i*10;
        bin(num/2);
    }
    else
        return(binary=num*i+binary);
}