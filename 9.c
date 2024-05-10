#include<stdio.h>
#include<math.h>
int main(){

    //to calculate the area of a triangle when three sides of a triangle is give 
    int s1,s2,s3;
    printf("Enter the three sides of the triangle =");
    scanf("%d%d%d",&s1,&s2,&s3);
    float semi, area;
    semi=(s1+s2+s3)/2;
    area=sqrt(semi*(semi-s1)*(semi-s2)*(semi-s3));
    printf("The area of a Triangle is %f",area);
}