#include<stdio.h>
int main(){
    char a;
    int c;
    printf("Enter the character: ");
    scanf("%c",&a);
    c=(((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))?1:0);
    if(c==1){
        printf("Special Character");
    }
    else{
        printf("Not a Special Character");
    }
    return 0;
}