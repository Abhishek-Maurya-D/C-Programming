#include<stdio.h>
int main(){
//calculating the smallest number of notes required for an amount enter by the user
    int n,v=0;
    printf("The the amount to which you want to calculate the least number of notes = ");
    scanf("%d",&n);
    v=n/100;
    n=n%100;
    v=(n/50)+v;
    n=n%50;
    v=(n/10)+v;
    n=n%10;
    v=(n/5)+v;
    n=n%5;
    v=(n/2)+v;
    n=n%2;
    v=(n/1)+v;
    n=n%1;
    printf("The minimum number of notes = %d",v);
    return 0;
}