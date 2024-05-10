#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0, arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float stdev, avg;
    for(int i=0;i<15;i++)
    {
        sum=sum+arr[i];
    }
    // printf("%d",sum);
    avg=sum/15.0;
    printf("Mean of the data is %f\n",avg);
    float z=0;
    for(int i=0;i<15;i++)
    {
        float x=(arr[i]-avg);
        float y=pow(x,2);
        z=z+y;
    }
    stdev=sqrt((z/15));
    printf("Standard Deviation of the data is %f\n",stdev);
    return 0;
}