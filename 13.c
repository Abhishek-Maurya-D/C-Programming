/*
#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter the x and y coordinates of a point = ");
    scanf("%d%d",&x,&y);
    float r,theta;
    r=sqrt(x*x + y*y);
    // for tan inverse we use atan(value)
    theta=atan(y/x);
    printf("The Polar Coordinates of the Point is %f  %f",r,theta);
    return 0;
}
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x, y, degree;
    float r, phi, p;
    //Take cartesian co-ordinates from user
    printf("Enter the co-ordinate points (x, y): ");
    scanf("%d %d", &x, &y);
    //calculate the value of r
    r = sqrt(x*x + y*y);
    //calculate the value of phi
    //for tan inverse we use atan(value)
    phi = atan(y/x);
    //Print polar co-ordinates on screen
    printf("The polar co-ordinates of (%d,%d) is (%f, %f)",x, y, r, phi);
    //convert radian value into degree
    p = 3.141592;
    degree = phi * (180/p);
    printf("\nThe polar co-ordinates in Degree: (%f, %d)", r, degree);
    return 0;
}