#include <stdio.h>
#include <math.h>


double X[10], Y[10], a[10]; 
int N;

int factorial(int x)
{
	if(x <= 1)
		return 1;
	else
		return x * factorial(--x);
}
double difference_calculator(int xn, int x0)
{
	if(xn - x0 == 1)
		return (Y[xn] - Y[x0]);
	
	else
	{
		return (difference_calculator(xn, x0+1) - difference_calculator(xn - 1, x0));	
	} 
}


void newton_forward_difference_interpolation(double x)
{
	int n = 0, i, j;
	double  total = 0, h = X[1] - X[0], s;
	s = (x - X[0] )/h; 
	
	a[0] = Y[0];
	
	
	for(i = 1; i < N; i++)
	{
		a[i] = difference_calculator(i, 0);	
	}
	
	total = a[0];
	
	for(i = 1; i < N; i++)
	{
		double sdiff = 1;
		for(j = 0; j < i; j++)
		{
			sdiff *= s - j; 
		}
		
		total += a[i] * sdiff/ factorial(i);
	}
		
	printf("Newton forward difference interpolation at %lf = %lf\n", x, total);
	
}


int main()
{
	int i;
	double x;
	
	printf("Enter the number of data points: ");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		printf("Enter X and Y pair : ");
		scanf("%lf%lf", &X[i], &Y[i]);
	}
	
	printf("Enter the value to interpolate at : ");
	scanf("%lf", &x);
	
	newton_forward_difference_interpolation(x);
	
}
