 #include<stdio.h>
 #include<math.h>
 //to check that the three points contributing to the stainght line or not
 int main(){
    int x1,x2,x3,y1,y2,y3,d1,d2,d3;
    printf("Enter the coordinate of the first point = ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinate of the second point = ");
    scanf("%d%d",&x2,&y2);
    printf("Enter the coordinate of the third point = ");
    scanf("%d%d",&x3,&y3);
    d1=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    d2=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    d3=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    if(d1+d2==d3){
        printf("It is a straight line");
    }
    else
        printf("It is not a straight line");
    return 0;
 }