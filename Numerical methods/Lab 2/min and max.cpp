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


void min_max_calculator()
{
	int n = 0, i, j;
	double  total = 0, h = X[1] - X[0], s, a, b, c;
	
	a[0] = Y[0];
	
	
	for(i = 1; i < N; i++)
	{
		a[i] = difference_calculator(i, 0);	
	}
	
	
	a = 1/2 * a[N-1];
	b = a[N-2] - a[N-1];
	c = a[1] - 1/2 * a[N-2] + 1/3 * a[N-1];
	 

}


int main()
{
	int i;
	
	printf("Enter the number of data points: ");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		printf("Enter X and Y pair : ");
		scanf("%lf%lf", &X[i], &Y[i]);
	}

	min_max_calculator();
	
}
