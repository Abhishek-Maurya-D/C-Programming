#include<stdio.h>
// to find the average of marks and division got by the students
/* Method 

int main(){
    int m1,m2,m3,m4,m5,per;
    printf("Enter the marks of the five different subjects out of 100 = ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>59){
        printf("First Division");
    }
    if(per>49 && per<60){
        printf("Second Division");
    }
    if(per>39 && per<50){
        printf("Third Division");
    }
    if(per<40){
        printf("Fail");
    }
    return 0;
}
*/

/* Method 2 
int main(){
    int m1,m2,m3,m4,m5,per;
    printf("Enter the marks of the five different subjects out of 100 = ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>=60){
        printf("First Division");
    }
    else if(per>=50){
        printf("Second Division");
    }
    else if(per>=40){
        printf("Third Division");
    }
    else
        printf("Fail");
    return 0;
}
*/
/*Method 3*/
int main(){
    int m1,m2,m3,m4,m5,per;
    printf("Enter the marks of the five different subjects out of 100 = ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>=60){
        printf("First Division");
    }
    else{
        if (per>=50){
            printf("Second Division");
        }
        else{
            if(per>=40){
                printf("Third Division");
            }
            else
                printf("Fail");
        }
    }
    return 0;
}
