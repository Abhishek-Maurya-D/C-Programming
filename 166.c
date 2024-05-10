#include<stdio.h>
#include<math.h>
int main()
{
    float Area[6], largest;
    float a[6]={137.40,155.20,149.30,160.00,155.60,149.70};
    float b[6]={80.90,92.62,97.93,100.25,68.95,120.00};
    float angle[6]={.78,.89,1.35,9.00,1.25,1.75};
    for(int i=0;i<6;i++)
    {
        angle[i]=(3.14/180)*angle[i];
        Area[i]=((.5)*(a[i])*(b[i])*(sin(angle[i])));
    }
    largest=Area[0];
    for(int i=0;i<6;i++)
    {
        if(largest<Area[i])
            largest=Area[i];
    }
    printf("The largest triangle's Area is %f",largest);
    return 0;
}