#include <stdio.h>

int sum(int n);

int main ()
{
    int num, total;
    printf("Enter the number up to which you want sum: ");
    scanf("%i", &num);
    total = sum(num);
    printf("The sum = %i\n", total);
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n-1);
    }
}
