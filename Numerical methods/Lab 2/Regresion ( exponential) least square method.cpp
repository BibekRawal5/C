#include <stdio.h>
#include <math.h>

#define MAX 10

int main()
{
	float x[MAX], y[MAX], sum_x=0, sums_x=0, log_y=0, log_xy=0, r, b, a;
	int i, n;
	
	printf("Enter number of data points(MAX = %d): ", MAX);
	scanf("%d", &n);
	
	printf("enter the x and y pair of each points: ");
	for (i = 0; i <n; i++)
	{
		scanf("%f%f", &x[i], &y[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		sum_x += x[i];
		sums_x += x[i] * x[i];
		log_xy += x[i] * log(y[i]);
		log_y += log(y[i]);
	}
	
	b = (n * log_xy - sum_x * log_y)/(n * sums_x - sum_x * sum_x);
	r = log_y/n - b* sum_x/n;
	a = exp(r);
	
	printf("Fitted Exponential regression equation: y = %f * e^(%fX)\n", a, b);
	
	return 0;
}
