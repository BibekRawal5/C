#include <stdio.h>
#include <math.h>


double X[10], Y[10]; 
int N = 4;

void lagrange_interpolation(double x)
{
	int n = 0, i, j;
	double l[10], total = 0;
	
	while(x > X[n])
		n++;
	n++;
	
	for(i = 0; i <= n; i++)
	{
		l[i] = 1;
		
		for(j = 0; j <= n; j++)
			if(j != i)
				l[i] *= (x - X[j])/(X[i] - X[j]); 

		total += Y[i] * l[i];
	}
	printf("Lagrange interpolation at %lf = %lf\n", x, total);
	
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
	
	lagrange_interpolation(x);
	
}
