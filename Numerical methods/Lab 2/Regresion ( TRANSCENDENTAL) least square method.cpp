#include <stdio.h>
#include <math.h>

#define MAX 10

int main()
{
	float x[MAX], y[MAX], log_x=0, logs_x=0, log_y=0, log_xy=0, r, b, a;
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
		log_x += log(x[i]);
		logs_x += log(x[i]) * log(x[i]);
		log_xy += log(x[i]) * log(y[i]);
		log_y += log(y[i]);
	}
	
	b = (n * log_xy - log_x * log_y)/(n * logs_x - log_x * log_x);
	r = log_y/n - b* log_x/n;
	a = exp(r);
	
	printf("Fitted Exponential regression equation: y = %f * X^(%f)\n", a, b);
	
	return 0;
}
