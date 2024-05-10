#include<stdio.h>
#include<string.h>
int main()
{
    // char list[6][20]={"akshay","parag","raman","srinivas","gopal","rajesh"};
    char *names[]={"akshay","parag","raman","srinivas","gopal","rajesh"};
    char yourname[20];
    printf("Enter your name: ");
    scanf("%s",yourname);
    for(int i=0; i<=5; i++)
    {
        if(strcmp(&names[i][0],yourname)==0)
        {
            printf("Welcome, you can enter the palace\n");
            return 0;
        }
    }
    printf("Sorry, you are a trespasser");
    return 0;
}