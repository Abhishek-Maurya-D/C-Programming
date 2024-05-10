#include<stdio.h>
int main(){

//finding the reverse of a number

//    int n,v,d1,d2,d3,d4,d5;
    int n,l,v=0;
    printf("Enter the five digit number");
    scanf("%d",&n);
/*    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;
    v=d1*10000+d2*1000+d3*100+d4*10+d5;
*/
    for(int i=0;i<5;i++){
        l=n%10;
        v=v*10+l;
        n=n/10;
    }
    printf("The reverse of the number is %d",v);
    return 0;
}