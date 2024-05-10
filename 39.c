#include<stdio.h>
int main(){
// Program to check that the entered character is small or capatial letter or number or special symbol

    char ch;
    printf("Enter the character from the keyboard : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Enter character is a Capatial Letter");
    if(ch>=97 && ch<=122)
        printf("Enter character is a Small Letter");
    if(ch>=48 && ch<=57)
        printf("Enter character is a Number Letter");
    if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
        printf("Enter character is a Special Symbol");
    return 0;
}