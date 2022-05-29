// return factorial of n

#include <stdio.h>

long long factorial (int number);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    long long factor = factorial(n);
    printf("The factorial of %d is %lld\n", n, factor);
}

long long factorial(int number)
{
   if (number == 0)
   {
       return 1;
   }
   else
   {
       return (number * factorial(number-1));
   }
   
}