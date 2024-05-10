#include<stdio.h>
int main(){
    // program to calculate the aggregrate & percentage marks of a student
    int m1,m2,m3,m4,m5,agg;
    printf("Enter the marks obtain in five different subject = ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    agg=m1+m2+m3+m4+m5;
    float per;
    per = agg/5;
    printf("The Aggregate Marks Obtian = %d\n",agg);
    printf("The Percentage Marks Obtian = %f\n",per);
    return 0;
}