#include<stdio.h>
// To find out that the item sold is profited or loss
int main(){
    float cp,sp;
    printf("Enter the cost price of the item = ");
    scanf("%f",&cp);
    printf("Enter the salling price of the item = ");
    scanf("%f",&sp);
    if((sp-cp)>0){
        printf("Profited");
    }
    if((sp-cp)==0){
        printf("No Loss & No Profit");
    }
    if((sp-cp)<0){
        printf("Loss");
    }
    return 0;
}