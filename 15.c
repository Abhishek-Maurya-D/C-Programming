#include<stdio.h> 
#include<math.h>
int main(){

//To calculate the wind-chill factor

    float t,v,wcf;
    printf("Enter the temperature and wind velocity = ");
    scanf("%d%d", &t, &v);
    wcf=35.74+0.6215*t +(0.4275*t-35.75)*pow(v,0.16);
    printf("The Wind-Chill Factor is %f",wcf);
    return 0;
}