#include<stdio.h>
int main()
{
    int weight = 63;
    printf("Weight is %d kg\n", weight);
    printf("Weight is %2d kg\n", weight);
    printf("Weight is %4d kg\n", weight);
    printf("Weight is %6d kg\n", weight);
    printf("Weight is %-6d kg\n", weight);
    printf("Weight is %1d kg\n", weight);
    return 0;
}