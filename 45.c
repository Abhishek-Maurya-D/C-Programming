#include<stdio.h>
#include<math.h>
int main(){
    float W, H, h, B;
    printf("Enter the value of weigh and height: ");
    scanf("%f%f",&W,&H);
    h=H*H;
    B=(W/h);
    if(B<15){
        printf("Starvation");
    }
    if(B>=15.1 && B<=17.5){
        printf("Anorexic");
    }
    if(B>=17.6 && B<=18.5){
        printf("Underweight");
    }
    if(B>=18.6 && B<=24.9){
        printf("Ideal");
    }
    if(B>=25 && B<=29.9){
        printf("Overweight");
    }
    if(B>=30 && B<=39.9){
        printf("Obese");
    }
    if(B>=40){
        printf("Morbidly Obese");
    }
}