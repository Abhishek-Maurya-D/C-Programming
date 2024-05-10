#include<stdio.h>
#include<math.h>
//to find that the point lies on the circle or on it or outside it
int main(){
    int x1,y1,x2,y2,r,d1;
    printf("Enter the Coordinates of the centre of the circle = ");
    scanf("%d%d",&x1,&y1);
    printf("Radius of the circle = ");
    scanf("%d",&r);
    printf("Enter the Coordinates of the point = ");
    scanf("%d%d",&x2,&y2);
    d1=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    if(r==d1){
        printf("Point lies on the circle");
    }
    if(d1>r){
        printf("Point lies outside the circle");
    }
    if(d1<r){
        printf("Point lies inside the circle");
    }
    return 0;
}