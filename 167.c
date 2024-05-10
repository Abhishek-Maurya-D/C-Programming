#include <stdio.h>
#include <math.h>
int main()
{
    int n = 11;
    float xysum = 0, xsum = 0, ysum = 0, x2sum = 0, y2sum = 0, r;
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    for (int i = 0; i < n; i++)
    {
        xysum = xysum + (x[i] * y[i]);
        xsum = xsum + x[i];
        ysum = ysum + y[i];
        x2sum = x2sum + (x[i] * x[i]);
        y2sum = y2sum + (y[i] * y[i]);
    }

    r = (xysum - xsum*ysum)/(sqrt((n*x2sum - xsum*xsum)*(n*y2sum-ysum*ysum)));
    printf("The Correlation Coefficient r is %f\n", r);
    printf("%f\n",xsum);
    return 0;
}


// Another way of doing this
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
// 	float x[11][2] = {
// 		34.22, 102.43,
// 		39.87, 100.93,
// 		41.85, 97.43,
// 		43.23, 97.81,
// 		40.06, 98.32,
// 		53.29, 98.32,
// 		53.29, 100.07,
// 		54.14, 97.08,
// 		49.12, 91.59,
// 		40.71, 94.85,
// 		55.15, 94.65,
// 	}, xysum = 0, xsum = 0, ysum = 0, x2sum = 0, y2sum = 0, n = 11, r;
// 	for (int i = 0; i<11; i++)
// 	{
// 		xsum = xsum + x[i][0];
// 		ysum = ysum + x[i][1];
// 		xysum = xysum + x[i][0] * x[i][1];
// 		x2sum = x2sum + x[i][0] * x[i][0];
// 		y2sum = y2sum + x[i][1] * x[i][1];
// 	}
// 	r = (xysum - xsum*ysum) / (sqrt((n*x2sum - xsum*xsum)*(n*y2sum - ysum*ysum)));
// 	printf("Coefficient of correlation (r) = %f\n", r);
// 	printf("%f\n",xsum);
// 	return 0;

// }