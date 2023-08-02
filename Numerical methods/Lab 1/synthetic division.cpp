#include <stdio.h>
#include <math.h>

//FUNCTION
double FUNCTION[10], quotient[10]; 
int order;

double synthetic_division(double x, int order)
{
	int n = order, i;
	quotient[order] = 0;
	while(n > 0)
	{
		quotient[n - 1] = FUNCTION[n] + quotient[n] * x;
		n--;
	}
	
	int remainder = FUNCTION[0] + quotient[0] * x;
	
	printf("\nRemainder  = %lf\n", remainder);
	printf("Quotient = ");
	for(i = order; i >= 0; i--)
	{
			printf("%lfx^%d + \t", quotient[i], i);
	}
	printf("\n");
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
	
	printf("Enter the root of function : ");
	scanf("%lf", &x);
		
	synthetic_division(x, order);
		
}
