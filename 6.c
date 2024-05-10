#include<stdio.h>
int main(){

    //to convert temperature from fahrenheit to centigrade
    float fh, cg;
    printf("Enter the Temperature in Fahrenheit = ");
    scanf("%f", &fh);
    cg=((fh - 32)*5)/9;
    printf("Enter the Temperature in Centigrade = %f",cg);
}