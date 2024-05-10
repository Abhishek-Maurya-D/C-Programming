#include<stdio.h>
int main()
{
    int class, subject;
    printf("Enter the class obtion by student ");
    scanf("%d",&class);
    printf("Enter the Number of subjects the student got failed ");
    scanf("%d",&subject);
    switch(class)
    {
        case 1:
            if(subject>3)
                printf("Grace Marks = 0");
            else
                printf("Grace Marks = %d",5*subject);
            break;
        case 2:
            if(subject>2)
                printf("Grace Marks = 0");
            else
                printf("Grace Marks = %d",4*subject);
            break;
        case 3:
            if(subject>1)
                printf("Grace Marks = 0");
            else
                printf("Grace Marks = %d",5);
            break;
    }
    return 0;
}