#include <stdio.h>
#include <math.h>

double ERROR = 0.0000009;
double FUNCTION[10];
int order;

double Ofunc(double x)
{
	int i;
	double value = 0;
	for(i = 0; i <= order; i++)
	{	
		if(i != 1)
			value += FUNCTION[i] * pow(x, i);
	}
	value /= (-1.0 * FUNCTION[1]);
	return value;
}

double fixed_point_iteration(double a)
{
	double e, value, next;
	int c = 0;
	do{
		value = Ofunc(a);
		next = Ofunc(value);
//		printf("value, next = %lf, %lf at iteration %d\n", value, next, c++);
		
		e = (next - a)/a;
		
		if(e < 0)
			e *= -1.0;	
		
		a = next;
		
		}while((e > ERROR));
		
		return next;
	
}

int main()
{
	double a, root;
	int i;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X^%d : ", i);
		scanf("%lf", &FUNCTION[i]);
	}
	
	printf("Enter the initial guess: ");
	scanf("%lf", &a);
	
	root = fixed_point_iteration(a);
	
	printf("ROOT of the function = %lf\n", root);
	
	
}
