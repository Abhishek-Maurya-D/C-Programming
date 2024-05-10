#include<stdio.h>
int main(){
    //for calculating the price of goods when the discount rate is given
    int qut,pri,dis;
    float tot;
    printf("Enter the number of quantites of item are purchased = ");
    scanf("%d",&qut);
    printf("Enter the price of the item purchased = ");
    scanf("%d",&pri);
    if(qut>1000){
        dis=10;
    }
    else{
        dis=0;
    }
    tot=((pri*qut) - (pri*qut*dis/100));
    printf("The total price of the goods purchased is = %f",tot);
    return 0;
}