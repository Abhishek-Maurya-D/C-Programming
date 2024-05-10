#include<stdio.h>
//To check the smallest amoung the three inputs
int main(){
    int ram,shyam,ajay;
    printf("Enter the age of the Ram, Shyam and Ajay");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if(ram<shyam){
        if(ram<ajay){
            printf("Ram is the Youngest One amoung them");
        }
        else
            printf("Ajay is the youngest one among them");
    }
    else{
        if(shyam<ajay){
            printf("Shyam is the youngest one among them");
        }
        else{
            printf("Ajay is the youngest one among them");
        }
    }
    return 0;
}