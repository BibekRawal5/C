//find n^a using recursion functions

#include <stdio.h>

int calculation(int n, int p);

int main ()
{
    int number, power;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("Enter the power: ");
    scanf("%d", &power);
    
    printf("The answer is: %d\n", calculation(number, power));
}

int calculation(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return (a * calculation(a, b-1));
    }
}
