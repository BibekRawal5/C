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


int main()
{
	int i;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X^%d : ", i);
		scanf("%lf", &FUNCTION[i]);
	}
	
//	printf("VALUE = %lf\n", function(2));

	
	
}