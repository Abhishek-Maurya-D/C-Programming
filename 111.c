#include<stdio.h>
void convert(float ,float *,float *,float *);
int main()
{
    float wkg, wg, wt, wp;
    printf("Enter the Weight of the commidity in Kilogram: ");
    scanf("%f",&wkg);
    convert(wkg,&wg,&wt,&wp);
    printf("Weight in Gram = %f\n",wg);
    printf("Weight in  Tons = %f\n",wt);
    printf("Weight in Pound = %f\n",wp);
    return 0;
}
void convert(float kilogram,float *gram,float *tone,float *pound)
{
    *gram=1000*(kilogram);
    *tone=(kilogram)/1000;
    *pound=0.45*(kilogram);
}