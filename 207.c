#include<stdio.h>
#include<string.h>
int main()
{
    char isbn[11];
    int sum=0;
    printf("Enter the ISBN Code of the Book: ");
    scanf("%s", isbn);
    for(int i=0; i<10; i++)
    {
        isbn[i] -= 48;
        sum = sum + ((i +1)*isbn[i]);
    }
    if(sum%11)
        printf("ISBN is Correct\n");
    else
        printf("ISBN is not Correct\n");
    printf("%d\n",isbn[9]);
    return 0;
}