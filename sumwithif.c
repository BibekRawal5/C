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

printf("Input first number\n");
scanf("%i", &x );

printf("Input second number\n");
scanf("%i", &y );

if (x != 0) 
{
printf("The sum = %i\n", add(x,y) );
}

else
{
 printf("The sum = 0\n") ;
}


}
