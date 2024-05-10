#include<stdio.h>
int main(){
    int y;
    int c;
    printf("Enter the year: ");
    scanf("%d",&y);
    c=(((y%400==0) || (y%400!=0 && y%100!=0 && y%4==0) || (y%400==0 && y%100!=0))?1:0);
    if(c==1){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}