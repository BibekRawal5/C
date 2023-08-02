#include <stdio.h>
#include <math.h>


double X[10], Y[10], a[10]; 
int N;

double dd_calculator(int xn, int x0)
{
	if(xn - x0 == 1)
		return (Y[xn] - Y[x0])/(X[xn] - X[x0]);
	
	else
	{
		return 1/(X[xn] - X[x0]) * (dd_calculator(xn, x0+1) - dd_calculator(xn - 1, x0));	
	} 
}



void newton_dd_interpolation(double x)
{
	int n = 0, i, j;
	double  total = 0;
	
	a[0] = Y[0];
	
	while(x > X[n])
		n++;
	n++;
	
	
	for(i = 1; i <= n; i++)
	{
		a[i] = dd_calculator(i, 0);	
	}
	
	total = a[0];
	for(i = 1; i <= n; i++)
	{
		double xdiff = 1;
		for(j = 0; j < i; j++)
		{
			xdiff *= x - X[j]; 
		}
		
		total += a[i] * xdiff;
	}
		
	printf("Newton divided difference interpolation at %lf = %lf\n", x, total);
	
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
	
	newton_dd_interpolation(x);
	
}
