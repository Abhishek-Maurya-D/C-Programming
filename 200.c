// Demonistration of strcpy

// #include<stdio.h>
// void xstrcpy(char * , char *);
// int main()
// { 
//     char source[]="Sayonara", target [20];
//     xstrcpy(target, source);
//     printf("Source string = %s\n", source);
//     printf("Target string = %s\n", target);
//     return 0;
// }
// void xstrcpy(char *t, char *s)
// {
//     while (*s!='\0')
//     {
//         *t=*s;
//         s++;
//         t++;
//     }
//     *t='\0';
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char source[]="Sayonara", target[20];
//     strcpy(target, source);
//     printf("Source string = %s\n", source);
//     printf("Target string = %s\n", target);
//     return 0;
// }




#include<stdio.h>
void xstrcpy(char * ,const char *);
int main()
{ 
    char source[]="Sayonara", target [20];
    xstrcpy(target, source);
    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);
    return 0;
}
void xstrcpy(char *t,const char *s)
{
    while (*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}

