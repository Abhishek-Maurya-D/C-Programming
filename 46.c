#include<stdio.h>

// to check the entered character is the small letter one or not by using conditional operator

int main(){
    char a;
    int c;
    printf("Enter the character: ");
    scanf("%c",&a);
    c=((a>=97 && a<=122)?1:0);
    if(c==1){
        printf("Character");
    }
    else{
        printf("Not a Character");
    }
    return 0;
}