// Macro Pre-Processor

#include<stdio.h>
#include<stdlib.h>
#define AND &&
#define OR ||
#define ONE 1
#define Two ONE+ONE
#define Three Two+ONE
#define Message "This is a long Message"
#define product(x,y) x*y

int main()
{
    int result = product(10,20);
    printf("%d\n",result);
    if(1 OR 0)
        printf("Something True\n");
    printf("%d\n",Three);
    printf(Message);

    return 0;
}