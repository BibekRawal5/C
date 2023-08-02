#include <stdio.h>
#include <math.h>

//FUNCTION
double FUNCTION[10]; 
int order;

double function(double x)
{
	int i;
	double value = 0;
	for(i = 0; i <= order; i++)
	{
		value += FUNCTION[i] * pow(x, i);
	}
	return value;
}

void simpsons_13_rule(double a, double b, int k)
{
	int  i =0, j = 0;
	double h = (b - a) / k;
	double total = 1, sum = 0;
	double x[k];
	
	x[0] = a;
	
	while(x[i] != b)
	{
		x[i+1] = x[i] + h;
		i++;
	}
	
	total *= 3 * h/8;
	
	for(j = 0; j <= i; j++)
	{
		if(j == 0 || j == i)
			sum += function(x[j]);
		else if(j % 3 != 0)
			sum += 3 * function(x[j]);	
		else
			sum += 2 * function(x[j]);
	}
	
	total *= sum;
	
	printf("Using Composite Simpson's 1/3 Rule\n Integration f(%.2lf) = %.4lf\n", x, total);
}

int main()
{
	double a, b;
	int i, k = 1;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X^%d : ", i);
		scanf("%lf", &FUNCTION[i]);
	}
	
	printf("Enter the interval(a and b): ");
	scanf("%lf%lf", &a, &b);
	
	while(k%2 != 0)
	{
		printf("Enter no of segments (k must be even): ");
		scanf("%d", &k);
	}
	
	simpsons_13_rule(a, b, k);
	
}
