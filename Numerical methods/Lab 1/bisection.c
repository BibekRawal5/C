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

double midpoint_root(double sp, double ep, double fs, double fe)
{
	double mp, fm, e;
	
	do{
	
		mp = (sp+ ep)/2.0;
		fm = function(mp);
	
		if (fm == 0)
			return mp;
		
		else if(fm * fs < 0)
		{
			fe = fm;
			ep = mp;
		}
		else
		{
			sp = mp;
			fs = fm;
		}
	
		e = (ep - sp);
		if(e < 0)
			e *= -1.0;	
	
		}while(!(e <= ERROR));
		
		return (sp+ep)/2;
	
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
	
//	printf("VALUE = %lf\n", function(2));
	
	points: printf("Enter the starting and end point: ");
	scanf("%lf%lf", &a, &b);
	
	if(function(a) * function(b) > 0)
	{
		printf("Incorrect Starting and End points\n");
		goto points;
	}
	
	root = midpoint_root(a,b, function(a), function(b));
	
	printf("ROOT of the function = %lf\n", root);
	
	
}
