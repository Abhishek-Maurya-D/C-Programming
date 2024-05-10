#include<stdio.h>

//without using math library demonstration of the power function
int main(){
    float x, power=1;
    int y, i=1;
    printf("Enter two number: ");
    scanf("%f%d", &x, &y);
    while(i<=y){
        power=power*x;
        i++;
    }
    printf("%f to the power %d is %f", x, y, power);
    return 0;
}