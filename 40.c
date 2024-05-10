/*Checking that the entered sides of the triangle will form the valid triangle or not*/
#include<stdio.h>
int main(){
    int side1, side2, side3, sum, lagside;
    printf("Enter the three sides of the Triangle : ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1>side2){
        if(side1>side3){
            sum=side2+side3;
            lagside=side1;
        }
        else{
            sum=side2+side1;
            lagside=side3;
        }
    }
    else{
        if(side2>side3){
            sum=side1+side3;
            lagside=side2;
        }
        else{
            sum=side2+side1;
            lagside=side3;
        }
    }
    if(sum>lagside){
        printf("The triangle is the Valid");
    }
    else{
        printf("The triangle is not the Valid");
    }
    return 0;
}