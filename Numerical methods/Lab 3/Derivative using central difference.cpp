#include <stdio.h>
#include <math.h>

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

double derivative_central_diff(double x, double h)
{
	double fxh1 = function(x+h), fxh2 = function(x - h);
	
	return (fxh1 - fxh2)/(2*h);	
}

int main()
{
	double h, x, answer;
	int i;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X^%d : ", i);
		scanf("%lf", &FUNCTION[i]);
	}
	
	printf("Enter the initial value X: ");
	scanf("%lf", &x);
		
	printf("Enter the interval (h): ");
	scanf("%lf", &h);
	
	
	answer = derivative_central_diff(x, h);
	
	printf("f'(%.2lf) = %.4lf\n", x, answer);
	
}
