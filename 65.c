// Rough Work
#include <stdio.h>
int main()
{
    int i, j;
    // 1.
    // for(i=10;i;i--)
    //     printf("%d\n",i);
    // 2.
    // for(i<4;j=5;j=0)
    //      printf("%d\n",i);
    // 3.
    // for(i=1;i<=10;printf("%d\n",i++));
    // 4.
    printf("Enter the Number");
    for (scanf("%d", &i); i <= 10; i++)
        printf("%d\n", i);

    return 0;
}