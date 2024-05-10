#include<stdio.h>
int main(){
    float otpay;
    int hour, i=1;
    while(i<=10){
        printf("Enter the working hours= ");
        scanf("%d",&hour);
        if(hour>40)
            otpay=(hour-40)*120;
        else
            otpay=0;
        printf("(%d) The Over time pay of the employee is %f\n",i,otpay);
        i++;
    }
}