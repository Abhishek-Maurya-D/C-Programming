#include<stdio.h>
int main(){
    int matchstick=21,computer,human;
    printf("The total number of matchstick are 21\n");
    while(1)
    {
        printf("\nEnter the number of matchstick you want to take : ");
        scanf("%d",&human);
        if(human>4 || human<1){
            continue;
        }
        computer=5-human;
        printf("\nComputer pisks the number of matchsticks as :%d\n",computer);
        matchstick=matchstick-5;
        if(matchstick==1){
            printf("You had lossed\n");
            break;
        }
    }
}