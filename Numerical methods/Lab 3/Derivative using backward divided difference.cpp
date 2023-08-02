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



void derivative_backward_dd_interpolation(double x)
{
	int n = 0, i, j = 0, k = 0;
	double  total = 0;
	
	a[j++] = Y[N-1];
	

	for(i = N-2; i >= 0; i--)
	{
		a[j++] = dd_calculator(N-1, i);	
	}
	
	total = a[1];
	
	for(i = 2; i < N; i++)
	{
		double xsum = 0;
		for(j = 0; j < i; j++)
		{
			double xdiff = 1;
			for(k = 0; k < i; k++)
			{
				if(k != j)
				{
					 xdiff *= x - X[k];
				}
			}
			xsum += xdiff;
		}	
		total += a[i] * xsum;
	}
		
	printf("f'(%.3lf)= %.4lf\n", x, total);
	
	
	total = 2 *a[2];
	for(i = 3; i < N; i++)
	{
		double xsum = 0;
		for(j = 0; j < i; j++)
		{
			xsum += x - X[j];
		}
		
		total += 2 * a[i] * xsum;
	}
		
	printf("f''(%.3lf)= %.4lf\n", x, total);
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
	
	derivative_backward_dd_interpolation(x);
	
}
