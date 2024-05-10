#include<stdio.h>
// to find that the area of the rectangle is greater than that of the perimeter
int main(){
    int len, bre, area, per;
    printf("Enter the value of the length and breadth = ");
    scanf("%d%d",&len,&bre);
    area=len*bre;
    per=2*(len+bre);
    if(area>per){
        printf("The area of the Rectangle is greater then that of the perimeter");
    }
    else{
        printf("The area of the Rectangle is not greater then that of the perimeter");
    }
    return 0;
}