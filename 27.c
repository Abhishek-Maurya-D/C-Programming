#include<stdio.h>
//To check the sum of the three angles of the triangle
int main(){
    int a,b,c;
    printf("Enter the three angles of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)==180){
        printf("The triangle is the valid one");
    }
    else{
        printf("The triangle is not the valid one");
    }
}