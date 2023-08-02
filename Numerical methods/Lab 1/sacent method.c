#include <stdio.h>
#include <math.h>

//FUNCTION
double ERROR = 0.00000099;
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

double secant_method(double a, double b, double fa, double fb)
{
	double p, fp, e;
	
	do{
	
		p = b - (fb * (b-a))/(fb - fa);
		fp = function(p);
	
		if (fp == 0)
			return p;
		
		a = b;
		fa = fb;
		b = p;
		fb =fp;
	
		e = (b - a)/b;
		if(e < 0)
			e *= -1.0;	
	
		}while((e > ERROR));
		
		return p;
	
}

int main()
{
	double a,b, root;
	int i;
	
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X^%d : ", i);
		scanf("%lf", &FUNCTION[i]);
	}
		
	printf("Enter the 2 points: ");
	scanf("%lf%lf", &a, &b);
	
	
	root = secant_method(a,b, function(a), function(b));
	
	printf("ROOT of the function = %lf\n", root);
	
	
}