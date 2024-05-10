#include<stdio.h>
void cir(int arr[5]);
int main()
{
    int p[5]={15,30,28,19,61};
    cir(p);
    for(int i=0; i<5; i++)
    {
        printf("%d\t",p[i]);
    }
}
void cir(int arr[5])
{
    int a=arr[0];
    int b=arr[1];
    for(int i=0; i<5; i++)
    {
        arr[i]=arr[i+2];
    }
    arr[3]=a;
    arr[4]=b;
}