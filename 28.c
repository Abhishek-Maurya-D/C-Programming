#include<stdio.h>
//to calculate the absolute value of the number entered
int main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    if(num<0){
        num=num*-1;
    }
    printf("The absolute value of the number is = %d",num);
}