// Most Important Concept
// Insertion Sort using dynamic Memory location


#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int [],int );
void print(int [],int );
int main()
{
    int s, *p;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&s);
    p=(int *)malloc(s*sizeof(int));
    for (int i=0;i<s;i++)
    {
        printf("Enter the Elements of the array: ");
        scanf("%d",&p[i]);
    }
    insertion_sort(p,s);
    print(p,s);
}
void insertion_sort(int Array[],int size)
{
    int key,j;
    for(int i=1;i<size;i++)
    {
        key=Array[i];
        j=i-1;
        while(j>=0 && key<Array[j])
        {
            Array[j+1]=Array[j];
            j--;
        }
        Array[j+1]=key;
    }

}
void print(int Array[],int size)
{
    printf("Elements are = ");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",Array[i]);
    }
}