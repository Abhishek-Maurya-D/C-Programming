#include<math.h>
#include<stdio.h>
int main()
{
	int n=10;
	float x[n], y[n], dis[n-1],sumdis;
	for(int i=0; i<n; i++)
	{
		printf("Enter the x and y coordinates of the point: ");
		scanf("%f %f", &x[i], &y[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		dis[i]=sqrt((pow(x[i+1]-x[i],2))+(pow(y[i+1]-y[i],2)));
		sumdis=sumdis+dis[i];
	}
	printf("Distance from the first point to the last point is %f",sumdis);
	return 0;
}