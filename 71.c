#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    while (i++ <= 10)
    {
        while (j++ <= 20)
        {
            if (j == 15)
                break;
            else
                printf("%d %d\n", i, j);
        }
    }
    return 0;
}