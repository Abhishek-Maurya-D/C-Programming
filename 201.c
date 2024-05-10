// demonistration of strcmp

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char source[] = "Folks!", target[30]="Hello";
//     strcat(target, source);
//     printf("Source string = %s\n", source);
//     printf("Target string = %s\n", target);
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="Jerry", string2[]="Ferry";
    int i, j, k;
    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Abhishek Maurya");
    printf("%d %d %d\n",i, j, k);
    return 0; 
}