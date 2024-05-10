#include<stdio.h>
int main(){

    //calculation of the area and perimeter of circle & rectangle
    int len, bre,per,areR; 
    float rad,cfe,areC;
    printf("Enter the length and breadth of a rectangle = ");
    scanf("%d%d",&len,&bre);
    printf("Enter the radius of a circle = ");
    scanf("%f",&rad);
    per=2*(len+bre);
    areR=len*bre;
    cfe=2*3.14*rad;
    areC=3.14*rad*rad;
    printf("The Area of a Circle is = %f\n",areC);
    printf("The Area of a Rectangle is = %d\n",areR);
    printf("The Circumference of a Circle is = %f\n",cfe);
    printf("The Perimeter of a Rectangle is = %d\n",per);
}