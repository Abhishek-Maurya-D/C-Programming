#include<stdio.h>
int main(){

    //to calculate the simple interest 
    int pa, rof, tp; 
    float si;
    printf("Enter the Principal Amount = ");
    scanf("%d",&pa);
    printf("Enter the Rate of Interest = ");
    scanf("%d",&rof);
    printf("Enter the Time Period = ");
    scanf("%d",&tp);
    si=pa*rof*tp/100;
    printf("The Simple interest Value = %f", si);
    
}