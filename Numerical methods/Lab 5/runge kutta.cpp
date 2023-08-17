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

double runge_kutta_method(double x, double y, double h)
{
	double m[4];
	m[0] = function(x, y);
	m[1] = function(x+h/2, y + h/2 *m[0]);	
	m[2] = function(x+h/2, y + h/2 *m[1]);
	m[3] = function(x+h, y + h * m[2]);	
	y = y + h/6 * (m[0] + m[3] + 2 *(m[1] + m[2]));
	
	return y;
}


int main()
{
	double x, y, h;
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

	
	printf("VALUE = %lf\n", runge_kutta_method(x, y, h));
	
}
