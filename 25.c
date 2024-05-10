#include<stdio.h>
//to calculate the reverse of the number

int main(){
    int num,rev=0,v;
    printf("Enter the five digit Number = ");
    scanf("%d",&num);
/*    for(int i=0;i<5;i++){
        v=num%10;
        rev=rev*10+v;
        num=num/10;
    }
*/
    v=num%10;
    rev=rev*10+v;
    num=num/10;v=num%10;
    rev=rev*10+v;
    num=num/10;v=num%10;
    rev=rev*10+v;
    num=num/10;v=num%10;
    rev=rev*10+v;
    num=num/10;v=num%10;
    rev=rev*10+v;
    num=num/10;
    printf("The reverse of the number is = %d",rev);
    return 0;
}