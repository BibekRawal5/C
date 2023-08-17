#include <stdio.h>
#include <math.h>

//FUNCTION
double FUNCTION[10]; 
int order;

double function(double x, double y)
{
	int i;
	double value = 0;
	for(i = 0; i <= order; i++)
	{
		value += FUNCTION[i] * pow(x, i) * pow(y, order - i);
	}
	return value;
}

double euler_method(double x, double y, double h, int iter)
{
	if(iter <= 0)
		return y;
	
	y = y + h * function(x, y);
	x = x + h;
	euler_method(x, y, h, --iter);
}


int main()
{
	double x, y, h, iter;
	int i;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X[%d] Y[%d]  : ", i, order-i);
		scanf("%lf", &FUNCTION[i]);
	}
	
	printf("Enter the initial value of X and Y: ");
	scanf("%lf%lf", &x, &y);
	
	printf("Enter the step size: ");
	scanf("%lf", &h);
	
	
	printf("Enter the no of iteration: ");
	scanf("%lf", &iter);
	
	printf("VALUE = %lf\n", euler_method(x, y, h, iter));
	
}
