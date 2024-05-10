#include<stdio.h>
int main(){
    // To reverse the position of two numbers 
    int C,D;
    printf("Enter the two numbers through the keyboard = ");
    scanf("%d %d",&C,&D);
    C=C+D;
    D=C-D;
    C=C-D;
    printf("The numbers after the reverse is C=%d & D=%d",C,D);
    return 0;
}