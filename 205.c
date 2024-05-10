// Chapter-15 Strings 


// [A]-(a)
// #include<stdio.h>
// int main()
// {
//     char c[2]="A";
//     printf("%c\n",c[0]);
//     printf("%s\n",c);
//     return 0;
// }


// [A]-(b)
// #include<stdio.h>
// int main()
// {
//     char s[] = "Get Organised! Learn C!!";
//     printf("%s\n",&s[2]);
//     printf("%s\n",s);
//     printf("%s\n",&s);
//     printf("%c\n",s[2]);
//     return 0;
// }


// [A]-(c)
// #include<stdio.h>
// int main()
// {
//     char s[]="Borrowers of books spoil the symmetry of shelves";
//     int i=0;
//     while (s[i]!=0)
//     {
//         printf("%c %c\n",s[i],*(s+i));
//         printf("%c %c\n",i[s],*(i+s));
//         i++;
//     }
//     return 0;
// }


// [A]-(d)
// #include<stdio.h>
// int main()
// {
//     char str1[]={'H','e','l','l','o',0};
//     char str2[]="Hello";
//     printf("%s\n", str1);
//     printf("%s\n", str2);
//     return 0;
// }


// [A]-(e)
// #include<stdio.h>
// int main()
// {
//     printf(5+"Good Morning");
//     printf("%c\n","abcdefgh"[4]);
//     return 0;
// }


// [A]-(f)
#include<stdio.h>
int main()
{
    printf("%d %d %d\n",sizeof('3'), sizeof("3"), sizeof(3));
}