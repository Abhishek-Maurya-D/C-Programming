#include<stdio.h>
// to calculate the factorial of the number

int main(){
    int num, i=1, fact=1;
    printf("Enter the number to calculate the factorial: ");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}