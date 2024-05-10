/*    #include<stdio.h>
#include<math.h>
//To find the number of Armstrong number from 1 to n
int main(){
    int i, end, sum, digits, lastdigit, num;
    printf("Enter the end number:");
    scanf("%d",&end);
    printf("Armstrong number form 1 to %d are : ", end);
    for(i=1;i<end;i++){
        sum=0;
        num=i;
        digits=(int)log10(num)+1;
        while(num>0){
            lastdigit=num%10;
            sum=sum+pow(lastdigit,digits);
            num=num/10;
        }
        if(i==sum){
            printf("%d,",i);
        }
    }
    return 0;
}*/

/**
 * C program to print Armstrong numbers from 1 to n
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i, end;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("Armstrong number between 1 to %d are: \n", end);

    for (i = 1; i <= end; i++)
    {
        sum = 0;

        /* Copy the value of num for processing */
        num = i;

        /* Find total digits in num */
        digits = (int)log10(num) + 1;

        /* Calculate sum of power of digits */
        while (num > 0)
        {
            /* Extract last digit */
            lastDigit = num % 10;

            // Find sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastDigit, digits));

            /* Remove the last digit */
            num = num / 10;
        }

        /* Check for Armstrong number */
        if (i == sum)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}

/*
#include<stdio.h>
#include<math.h>
int main(){
    int i, sum, end, digit, lastdigit, num;
    printf("Enter the end number: ");
    scanf("%d",&end);
    printf("The armstrong form 1 to %d are:",end);
    for(i=1;i<end;i++){
        sum=0;
        num=i;
        digit=(int)log10(num)+1;
        while(num>0){
            lastdigit=num%10;
            sum=sum+pow(lastdigit,digit);
            num=num/10;
        }
        if(i==sum){
            printf("%d,",i);
        }
    }
}
*/