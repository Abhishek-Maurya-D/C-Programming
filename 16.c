#include<stdio.h>
#include<math.h>
int main(){
    float angle;
//to calculate the all trignometric ratios

    printf("Enter value of angle to find all the trignometric ratios = ");
    scanf("%f",&angle);
    printf("Sin(%f) = %f\n",angle,sin(angle));
    printf("Cos(%f) = %f\n",angle,cos(angle));
    printf("Tan(%f) = %f\n",angle,tan(angle));
    printf("Cosec(%f) = %f\n",angle,1/sin(angle));
    printf("Sec(%f) = %f\n",angle,1/cos(angle));
    printf("Cot(%f) = %f\n",angle,1/tan(angle));
    printf("Sin-1(%f) = %f\n",angle,asin(angle));
    printf("Cos-1(%f) = %f\n",angle,acos(angle));
    printf("Tan-1(%f) = %f\n",angle,atan(angle));
    printf("Cosec-1(%f) = %f\n",angle,1/asin(angle));
    printf("Sec-1(%f) = %f\n",angle,1/acos(angle));
    printf("Cot-1(%f) = %f\n",angle,1/atan(angle));
    return 0;
}