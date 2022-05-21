#include "stdio.h"

int add(int a , int b)
{
int sum = a + b;
return sum;
}

int main()
{
int x;
int y;

printf("Input first number");
scanf("%i", &x );

printf("Input second number");
scanf("%i", &y );

printf("The sum = %i\n", add(x,y) );

}
