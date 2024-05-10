#include<stdio.h>
void display(int row, int col, int arr[row][col]);
int main()
{
    int arr1[3][5] = {
                1,2,3,4,5,6,7,8,9,10, 11,12,13,14,15
                };
    int arr2[2][4] = {
                1,2,3,4,5,6,7,8
                };
    display(3,5,arr1);
    display(2,4,arr2);
    return 0;
}
void display(int row, int col, int arr[row][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
