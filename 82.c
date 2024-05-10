// To print pythagorean Triplets 
// Important Concept

#include <math.h>
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("The Pythagoran Triplets are \n");
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            if (i == j || i > j)
                continue;
            for (int k = 1; k <= 30; k++)
            {
                if (j == k || i == k || i > k || j > k)
                    continue;
                x = pow(i, 2);
                y = pow(j, 2);
                z = pow(k, 2);
                if (x == y + z || y == z + x || z == x + y)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}