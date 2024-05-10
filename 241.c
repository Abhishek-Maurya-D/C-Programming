// Chapter - 18 
// [A] - (a)

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if (islower(ch))
        putchar(toupper(ch));
    else
        putchar(tolower(ch));
    return 0;
}

// [A] - (b)
// #include<stdio.h>
// int main()
// {
//     int i=2;
//     float f = 2.5367;
//     char str[] = "Life is like that";
//     printf("%8d\t%3.3f\t%s\n", i, f, str);
//     return 0;
// }

// [A] - (c)
// #include<stdio.h>
// int main()
// {
//     printf("More often than \b\b not \rthe person who wins is the one who thinks he can!\n");
//     return 0;
// }

// [A] - (d)
// #include<conio.h>
// #include<stdio.h>
// char p[] = "The sixth sick sheikh's sixth ship is sick";
// int main()
// {
//     int i=0;
//     while (p[i]!='\0')
//     {
//         putchar(p[i]);
//         i++;
//     }
//     return 0;
// }

// // [B] - (a)
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     char a[] = "Hello";
//     while(a[i] != '\0')
//     {
//         printf("%c", *(a+i));
//         i++;
//     }
//     return 0;
// }

// // [B] - (b)
// #include<stdio.h>
// int main()
// {
//     double dval;
//     scanf("%lf", &dval);
//     printf("Double Value = %f\n", dval);
//     return 0;
// }

// // [B] - (c)
// #include<stdio.h>
// int main()
// {
//     int ival;
//     scanf("%d",&ival);
//     printf("Interger Value = %d\n", ival);
//     return 0;
// }

// // [B] - (d)
// #include<stdio.h>
// int main()
// {
//     int dd, mm, yy;
//     printf("Enter data in dd/mm/yy or dd-mm-yy format\n");
//     scanf("%d%*c%d%*c%d", &dd, &mm, &yy);
//     printf("The data is: %d-%d-%d\n", dd, mm, yy);
//     return 0;
// }

// // [B] - (e)
// #include<stdio.h>
// int main()
// {
//     char text[50];
//     sprintf(text,"%4d\t%2.2f\n%s",12,3.452,"Merry Go Round");
//     printf("%s\n",text);
//     return 0;
// }

// // [B] - (f)
// #include<stdio.h>
// int main()
// {
//     char buffer[50];
//     int no = 97;
//     double val = 2.34174;
//     char name[10] = "Shweta";
//     sprintf(buffer,"%d %lf %s", no, val, name);
//     printf("%s\n",buffer);
//     sscanf(buffer,"%4d %2.2lf %s", &no, &val, name);
//     printf("%s\n", buffer);
//     printf("%d %lf %s\n", no, val, name);
//     return 0;
// }