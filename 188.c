#include<stdio.h>
int main()
{
    int mat1[6][6]={
                        {1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}
                    };
    int mat2[6][6]={
                        {37,38,39,40,41,42},{43,44,45,46,47,48},{49,50,51,52,53,54},{55,56,57,58,59,60},{61,62,63,64,65,66},{67,68,69,70,71,72}
                    };
    int matsum[6][6];
    for(int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            matsum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            printf("%d\t",matsum[i][j]);
        }
        printf("\n");
    }
}