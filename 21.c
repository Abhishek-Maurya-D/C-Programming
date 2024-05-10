#include<stdio.h>
//To find that the entered number is odd or even
int main(){
    int x;
    printf("Enter the number = ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}