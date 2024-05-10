// #include<stdio.h>
// int main()
// {
//     char *names[]={"akshay","parag","raman","srinivas","gopal","rajesh"};

// }


// Exchange names using 2-D array of characters

#include<stdio.h>
int main()
{
    char *names[][20]={"akshay", "parag", "raman", "srinivas", "gopal", "rajesh"};
    char *temp;
    printf("Original: %s %s\n", names[2][0], names[3][0]);
    temp=names[2];
    names[2]=names[3];
    names[3]=temp;
    printf("\nNew: %s %s\n", names[2][0], names[3][0]);
    return 0;
}