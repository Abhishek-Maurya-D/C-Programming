#include<stdio.h>
int main()
{
    int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3]={{7,8,9},{4,5,6},{1,2,3}};
    int pm1m2[3][3]={};
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                pm1m2[i][j]=mat1[i][k]*mat2[k][j]+pm1m2[i][j];
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            printf("%d\t",pm1m2[i][j]);
        printf("\n");
    }
    return 0;
}