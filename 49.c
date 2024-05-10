#include<stdio.h>
int main(){
    int x, y, z, max;
    printf("Enter the Numbers: ");
    scanf("%d%d%d",&x, &y, &z);
    max=x;
    max=(max<y?y:max);
    max=(max<z?z:max);
    printf("Greatest Number is %d",max);
}