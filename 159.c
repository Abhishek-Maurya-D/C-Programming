// Chapter 13 [B]-(a)

#include<stdio.h>
void pos_neg(int [],int );
void odd_even(int [],int );
int main()
{
    int arr[25],num;
    for(int i=0;i<25;i++)
    {
        printf("Enter the elements to the array: ");
        scanf("%d",&arr[i]);
    }
    num=sizeof(arr)/sizeof(arr[0]);
    pos_neg(arr,num);
    odd_even(arr,num);
}
void pos_neg(int Array[],int size)
{
    int count=0;
    for (int i=0;i<size;i++)
    {
        if(Array[i]<0)
            count++;
    }
    printf("Number of Negative Values is %d\n",count);
    printf("Number of Positive Values is %d\n",size-count);
}
void odd_even(int Array[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(Array[i]%2==0)
            count++;
    }
    printf("Number of Even Values is %d\n",count);
    printf("Number of Odd Values is %d\n",size-count);
}