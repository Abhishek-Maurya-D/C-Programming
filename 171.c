#include<stdio.h>
int main()
{
    // int stud[4][2]={{1234,56},{1212,33},{1434,80},{1312,78}};
    int stud[4][2]={1234,56,1212,33,1434,80,1312,78};
    for(int i=0;i<=3;i++)
        printf("%d %d\n",stud[i][0],stud[i][1]);
    return 0;
}