#include<stdio.h>
int main()
{
    int m, mat[3][3]={
                        {1,2,3},{2,4,5},{3,5,6}
                    };
    for(int i=0;i<3;i++)
    {
        for (int j=0; j<3; j++)
        {
            if(i!=j)
            {
                if (mat[i][j]==mat[j][i])
                    m=1;
                else 
                    m=0;
            }
        }
    }
    if(m==1)
        printf("The Matrix is symmetric");
    else
        printf("The Matrix is not symmetric");
}