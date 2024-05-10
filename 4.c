#include<stdio.h>
int main(){

    //conversion from kilometer to meter, inches, feet, centimeter
    float km, m, ft, in, cm;
    printf("Enter the distance between two cities in Kilometer = ");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    in=cm/2.54;
    ft=in/12;
    printf("The distance in terms of meter is = %f\n",m);
    printf("The distance in terms of centimeter is = %f\n",cm);
    printf("The distance in terms of inches is = %f\n",in);
    printf("The distance in terms of feet is = %f\n",ft);
    return 0;   
}