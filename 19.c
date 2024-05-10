#include<stdio.h>
// calculating the gross salary of an employee
int main(){
    float gs, bs,hra,da;
    printf("Enter the base salary of an employee = ");
    scanf("%f",&bs);
    if(bs<1500){
        hra=bs*0.1;
        da=bs*0.9;
    }    
    else{
        hra=500;
        da=bs*0.98;
    }
    gs=bs+hra+da;
    printf("The Gross Salary of the employee is = %f",gs);
    return 0;
}