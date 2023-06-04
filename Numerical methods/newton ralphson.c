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

double integration(double x)
{
	int i;
	double value = 0;
	for(i = 0; i <= order; i++)
	{
		if ( i == 0)
			value += 0;
		else
			value += i * FUNCTION[i] * pow(x, i - 1);
	}
	
	return value;
}

double newton_ralphson(double a, double fa, double fia)
{
	double p, fp, fip, e;
	
	do{
	
		p = a - (fa/fia);
		fp = function(p);
		fip = integration(p);
	
		if (fp == 0)
			return p;
		
	
		e = (p - a);
		if(e < 0)
			e *= -1.0;	
		
		a = p;
		fia = fip;
		fa = fp;
		
		}while((e > ERROR));
		
		return p;
	
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
		
	points: printf("Enter the starting point: ");
	scanf("%lf", &a);
	
	
	root = newton_ralphson(a,function(a), integration(a));
	
	printf("ROOT of the function = %lf\n", root);
	
	
}