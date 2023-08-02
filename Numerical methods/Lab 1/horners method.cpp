#include <stdio.h>
#include <math.h>

//FUNCTION
double FUNCTION[10], quotient[10]; 
int order;

double hernes_method(double x, int order)
{
	int n = order, i;
	quotient[order] = FUNCTION[order];
	while(n > 0)
	{
		quotient[n - 1] = FUNCTION[n - 1] + quotient[n] * x;
		n--;
	}
	
	printf("F(%lf) = %lf", x, quotient[0]);
}

int main()
{
	double x;
	int i;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X^%d : ", i);
		scanf("%lf", &FUNCTION[i]);
	}
	
	printf("Enter the value to calulate at(x ?) : ");
	scanf("%lf", &x);
	
	hernes_method(x, order);
		
}
