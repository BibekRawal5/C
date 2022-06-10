#include <stdio.h>

int factorial (int n);

int main ()
{
    int number, fact;
    printf("Enter the number whose factorial you want: ");
    scanf("%i", &number);
    fact = factorial (number);
    printf("The Factorial of %i is: %i\n", number, fact);

}

int factorial (int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial( n - 1);
    }
}