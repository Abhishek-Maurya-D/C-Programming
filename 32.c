#include<stdio.h>
// To check that where is the point lies on the x-axis or y-axis or at the origin
int main(){
    int x,y;
    printf("Enter the coordinates of the point");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("The point is at the origin\n");
    }
    else if(y==0){
        printf("The point lies on the y-axis\n");
    }
    else if(x==0){
        printf("The point lies on the x-axis\n");
    }
    else{
        printf("The point doesn't lies on the x-axis or y-axis or at the origin\n");
    }
    return 0;
}