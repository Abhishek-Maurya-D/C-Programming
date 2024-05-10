// To find the range of numbers from inintial to the highest one
#include<stdio.h>
#include<conio.h>
//#include<limits.h>
void main()
{
    int num;
    //take the maximum and minimum range for an integer (min=-2147483648 max=2147483647)
    //here we are using c standard library for int data type range <climits> 
    //int min = INT_MIN, max = INT_MAX;
    int min=-2147483648,max=2147483647;
    char choice;
    do{
    printf("Enter an integer: ");
    scanf("%d", &num);
    //find the maximum and minimum value within input list of numbers
    if(num>min)
        min = num;
    if(num<max)
        max = num;
    //ask for user choice to add another number
    printf("You want to add another integer(y/n)?: ");
    scanf(" %c", &choice); //we have to add a space before '%c'
    }while(choice=='Y'||choice=='y');
printf("Range is %d", (min-max));
getch();
}