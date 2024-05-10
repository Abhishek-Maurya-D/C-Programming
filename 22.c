#include<stdio.h>
// To check that the enter year is the leap year or not
int main(){
    int y;
    printf("Enter the year = ");
    scanf("%d",&y);
    if(y%100==0){
        if(y%400==0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    else{
        if(y%4==0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    return 0;
}