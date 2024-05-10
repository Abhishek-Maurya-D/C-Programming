#include <stdio.h>
int main()
{
    float H, C, T, G;
    printf("Enter the value of Hardness, Carbon-Content and Tensile Strength: ");
    scanf("%f%f%f", &H, &C, &T);
    if (H > 50 && C < 0.7 && T > 5600)
    {
        G = 10;
    }
    else if (H > 50 && C < 0.7)
    {
        G = 9;
    }
    else if (C < 0.7 && T > 5600)
    {
        G = 8;
    }
    else if (H > 50 && T > 5600)
    {
        G = 7;
    }
    else if (H > 50 || C < 0.7 || T > 5600)
    {
        G = 6;
    }
    else if (H < 50 && C > 0.7 && T < 5600)
    {
        G = 5;
    }
    printf("Grade = %f", G);
    return 0;
}