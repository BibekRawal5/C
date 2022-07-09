#include <stdio.h>

int add(int n);

int main ()
{
    int number, fact;
    printf("Enter the number whose add you want: ");
    scanf("%i", &number);
    fact = add (number);
    printf("The add of %i is: %i\n", number, fact);

}

int add(int n)
{
    
    if(n <= 0)
        return 0;
    else
        return n + add(n - 1);

}