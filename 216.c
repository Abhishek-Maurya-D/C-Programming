//  Not done now 
// To multiply two numbers having 200 digits

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200], str2[200], str3[200];
    printf("Enter 1st number: ");
    scanf("%s",str1);
    printf("Enter 2nd number: ");
    
    scanf("%s",str2);
    for (int i = 0; i < 200; i++)
    {
        str1[i] -= 48;
        str2[i] -= 48;
    }
    for(int i=0; i<200; i++)
    {
        str3[i]=str1[i]*str1[i];
    }
    for (int i = 0; i < 200; i++)
    {
        str1[i] -= 48;
        str2[i] -= 48;
    }
    printf("%s",str3);
    return 0;
}









#include<stdio.h>
int main()
{
    int temp, arr1[200], arr2[200], pa12[200][201];
    printf("Enter 1st Number: ");
    for(int i=0; i<200; i++)
        scanf("%d",arr1[i]);
    printf("Enter 2nd Number: ");
    for(int i=0; i<200; i++)
        scanf("%d",arr2[i]);
    for(int i=0,j=199; i<100,j>=100; i++,j--)
    {
        temp=arr1[i];
        arr1[i]=arr1[j];
        arr1[j]=temp;
    }
    for(int i=0; i<200; i++)
        printf("%d",arr1[i]);
    // for(int i=0; i<200; i++)
    // {
    //     pa12[i]
    // }
}












#include<stdio.h>
int main()
{
    int temp, arr1[200], arr2[200], pa12[200][201];
    printf("Enter 1st Number: ");
    for(int i=0; i<200; i++)
        scanf("%d",arr1[i]);
    return 0;
}












