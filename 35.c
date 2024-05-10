// To use multiple if condition in a single command

#include<stdio.h>
int main(){
    char ms, sex;
    int age;
    printf("Enter the Marital Status, Sex & Age = ");
    scanf("%c%c%d",&ms,&sex,&age);
    if((ms=='Y') || (ms=='N' && sex=='M' && age>30) || (ms=='N' && sex=='F' && age>25)){
        printf("The drive is secured");
    }
    else
        printf("The driver is not secured");
    return 0;
}