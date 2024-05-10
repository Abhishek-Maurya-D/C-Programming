#include<math.h>
#include<stdio.h>
int main(){
    float s1,s2,s3,h1,h2,h3;
    printf("Enter the three sides of the triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3){
        printf("Equaliteral Triangle\n");
    }
    if(s1!=s2 && s2!=s3 && s3!=s1){
        printf("Scalene Triangle\n");
    }
    if(s1==s2 || s3==s2 || s1==s3){
        printf("Isosceles Triangle\n");
    }
    h1=sqrt(((s1*s1)+(s2*s2)));
    h2=sqrt(((s3*s3)+(s2*s2)));
    h3=sqrt(((s1*s1)+(s3*s3)));
    if(h1==s3 || h2==s1 || h3==s2){
        printf("Right Angled Triangle\n");
    }
}