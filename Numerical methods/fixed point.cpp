#include <stdio.h>
#include <math.h>

#define function(x) x*x-2*x-3
#define Ofunc(x) (x*x-3)/2
#define ERROR 0.0009

double fixed_point_iteration(double a)
{
	double e, value, next;
	
	do{
		value = Ofunc(a);
		next = Ofunc(value);
		
		e = (next - a);
		
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
	
	printf("The function is X*X - 2*X - 3:\n");
	
	printf("Enter the initial guess: ");
	scanf("%lf", &a);
	
	root = fixed_point_iteration(a);
	
	printf("ROOT of the function = %lf\n", root);
	
	
}