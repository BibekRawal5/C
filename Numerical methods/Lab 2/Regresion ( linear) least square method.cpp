#include <stdio.h>

#define MAX 10
int main()
{
	float x[MAX], y[MAX], sum_x=0, sums_x=0, sum_y=0, sum_xy=0, b, a;
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
		sum_xy += x[i] * y[i];
		sum_y += y[i];
	}
	
	b = (n * sum_xy - sum_x * sum_y)/(n * sums_x - sum_x * sum_x);
	a = sum_y/n - b*sum_x/n;
	
	printf("Fitted linear equation: y = %f + %fx\n", a, b);
	
	return 0;
}