#include<stdio.h>
int main(){

    // program to convert the base salary total salary when the house rent allowance and dearness allowance
    float bs,ts,da,hra;
    printf("Enter the Base Salary = ");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    printf("The Dear Allowance is = %f\n",da);
    printf("The House Rent Allowance is = %f\n",hra);
    ts=bs+da+hra;
    printf("The Total Salary is = %f\n",ts);
    return 0;
}