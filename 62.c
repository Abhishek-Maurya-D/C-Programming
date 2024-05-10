#include<stdio.h>
#include<math.h>
int main(){
    int num,octal=0,v,i=0;
    printf("Enter the number to find octal: ");
    scanf("%d",&num);
    while(num>=8)
    {
        v=num%8;
        octal=octal+v*pow(10,i);
        printf("%d\n",octal);
        num=num/8;
        i++;
    }
    printf("%d\n",octal);
    octal=octal+num*pow(10,i)+1;
    printf("%d\n",octal);
    return 0;
}

/*
#include<stdio.h>
void main()
{
int num,ocnum=1,foct=0,temp;
printf("\nEnter an integer = ");
scanf("%d",&num);
while(num>=8) //loop for converting decimal to octal
{
temp=num%8;
num=num/8;
ocnum=(ocnum*10)+temp;
}
ocnum=(ocnum*10)+num; //number is in reverse
while(ocnum!=1) //loop for reversing the octal result
{
temp=ocnum%10;
ocnum=ocnum/10;
foct=(foct*10)+temp;
}
printf("\nThe octal equivalent of %d\n",foct);
}
*/