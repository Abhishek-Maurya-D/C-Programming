// Memory map of structure elements
// Important for concept building



// #include<stdio.h>
// int main()
// {
//     struct book{
//         char name; float price; int pages;
//     };
//     struct book b1={'B', 130.00, 550};
//     printf("Adress of name= %u\n", &b1.name);
//     printf("Adress of price= %u\n", &b1.price);
//     printf("Adress of pages= %u\n", &b1.pages);
//     printf("Size of struct book: %zu bytes\n", sizeof(struct book));
//     return 0;
// }

/* In many systems, the size of a char is 1 byte. However, due to alignment requirements, the compiler may insert padding after the char member to ensure that subsequent members (float and int in this case) are properly aligned in memory.

Here's a breakdown of the memory layout:

char name; takes 1 byte.
Padding (compiler-inserted) may take 3 bytes to align the next float member.
float price; takes 4 bytes.
int pages; takes 4 bytes.
Therefore, the total size of the structure may be 12 bytes (1 + 3 + 4 + 4).
*/

#include<stdio.h>
int main()
{
    #pragma pack(1)
    struct emp
    {
        int a; char ch; float s;
    };
    #pragma pack()
    struct emp e;
    printf("%u %u %u\n", &e.a, &e.ch, &e.s);
}