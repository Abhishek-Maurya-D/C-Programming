#include<stdio.h>
int main(){
    //to calculate the sum of the digits of a number
    int n,v;
    printf("Enter the five digit number =");
    scanf("%d",&n);
    v=n%10;
    n=n/10;
    v=(n%10)+v;
    n=n/10;
    v=(n%10)+v;
    n=n/10;
    v=(n%10)+v;
    n=n/10;
    v=v+n;
    printf("The sum of digits is = %d",v);
    return 0;
}