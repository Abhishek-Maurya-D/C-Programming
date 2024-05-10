#include<stdio.h>
int main(){
    int num,mind=1,p,n,z;
    p=n=z=0;
    while(1)
    {
        printf("\nDo you want to enter the number( Yes=1 or No=0 ): ");
        scanf("%d",&mind);
        if(mind==0){
            break;
        }
        printf("\nEnter the number");
        scanf("%d",&num);
        if(num>0)
            p++;
        if(num<0)
            n++;
        if(num==0)
            z++;
    }
    printf("Positive = %d, Negative = %d, Zero = %d",p,n,z);
    return 0;
}