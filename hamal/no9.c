#include <stdio.h>
#include <conio.h>
#include <string.h>

int sumofdigits(int n);

int main()
{
    int n, sum;
    printf("Enter the 5 digit number: ");
    scanf("%d", &n);
    sum = sumofdigits(n);
    printf("The sum of its digits = %d\n", sum);
    getch();
    return 0;
}

int sumofdigits(int n)
{
    if(n <= 0)
        return 0;
    else
        return ( (n % 10) + sumofdigits(n/10));
}