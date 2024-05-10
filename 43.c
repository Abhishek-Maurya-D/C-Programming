#include <stdio.h>
int main()
{
    float R, G, B, C, M, Y, K, W, r, g, b;
    printf("Enter the Numbers of the Red, Green and Blue: ");
    scanf("%f%f%f", &R, &G, &B);
    r = R / 255;
    g = G / 255;
    b = B / 255;
    printf("Red=%f\n Green=%f\n Blue=%f\n", R, G, B);
    if (r > g && r > b)
    {
        W = r;
    }
    else if (g > r && g > b)
    {
        W = g;
    }
    else if (b > g && b > r)
    {
        W = b;
    }
    if (R != 0 && G != 0 && B != 0)
    {
        C = (W - r) / W;
        M = (W - g) / W;
        Y = (W - b) / W;
        B = 1 - W;
    }
    if (R == 0 && G == 0 && B == 0)
    {
        C = 0;
        M = 0;
        Y = 0;
        K = 1;
    }
    printf("C=%f\n M=%f\n Y=%f\n B=%f\n ", C, M, Y, B);
    return 0;
}