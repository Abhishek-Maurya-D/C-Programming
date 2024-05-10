#include<stdio.h>
int main(){
    int y;
    printf("Enter the Year = ");
    scanf("%d",&y);
    if((y%400==0 || y%100!=0) &&  y%4==0){
        printf("Enter year is the leap year");
    }
    else
        printf("Enter year is not the leap year");
    return 0;
}