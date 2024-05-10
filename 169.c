// Dequeue
#include<stdio.h>
void retrieveleft(int queue[], int , int );
void retrieveright(int queue[], int , int );
void insertleft(int queue[], int , int );
void insertright(int queue[], int , int );
int main()
{
    int input, arr[5]={1,2,3,4,5}, front=0, rear =4;
    printf("------\t\t\tDequeue\t\t\t------\n");
    printf("Enter the Operation you want to Perform\n");
    printf("1. Retrieve Left\n");
    printf("2. Retrieve Right\n");
    printf("3. Insert Left\n");
    printf("4. Insert Right\n");
    scanf("%d",&input);
    switch (input)
    {
        case 1:
            retrieveleft(arr,front,rear);
            break;
        case 2:
            retrieveright(arr,front,rear);
            break;
        case 3:
            insertleft(arr,front,rear);
            break;
        case 4:
            insertright(arr,front,rear);
            break;
        default:
            printf("You have entered the incorrect input");
    }
    return 0;
}
void retrieveleft(int queue[], int f, int r)
{
    printf("Left Most Value is %d",queue[f]);
}
void retrieveright(int queue[], int f, int r)
{
    printf("Right Most Value is %d",queue[r]);
}
void insertleft(int queue[], int f, int r)
{

}
void insertright(int queue[], int f, int r)
{

}