// Pointer notation to access 2-D array elements 
// Main concept


#include<stdio.h>
int main()
{
    int s[4][2]={{1234,56},{1212,33},{1434,80},{1312,78}};
    for(int i=0;i<=3;i++)
    {
        for (int j=0;j<=1;j++)
            // printf("%d ",s[i][j]);  // In the for loop the print statement will print the same text
            // printf("%d",*(*(s+i)+j));
        printf("\n");
    }
    return 0;
}