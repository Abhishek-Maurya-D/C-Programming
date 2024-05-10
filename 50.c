#include<stdio.h>
#include<math.h>
//verification of sin and cos 
int main(){
    float angle, sum, pi, temp, con;
    printf("Enter the value of Degree: ");
    scanf("%f",&angle);
    pi=22/7;
    temp=angle;
    angle=(angle*pi)/180;
    sum=(pow((sin(angle)),2)+pow((cos(angle)),2));
    con=(sum=1?1:0);
    if(con==1){
        printf("sin(%f)+cos(%f)=1",temp,temp);
    }
    else{
        printf("sin(%f)+cos(%f)!=1",temp,temp);
    }
    return 0;
}