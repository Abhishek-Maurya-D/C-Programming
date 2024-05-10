#include <stdio.h>
int main()
{
    int p, n, count;
    float r, si;
    count = 1;
    while (count <= 3)
    {
        printf("Enter the value of p, r and n: ");
        scanf("%d%f%d", &p, &r, &n);
        si = p * r * n / 100;
        printf("Simple Interest = Rs. %f\n", si);
        count = count + 1;
    }
    return 0;
}