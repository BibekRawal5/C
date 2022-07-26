#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, x, i, j, fact = 1, sum = 0;

    printf("Enter value of X: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = i; j > 0; j--)
            fact *= j;

        sum += pow(x, i) / fact;

    }

    printf("Sum = %d\n", sum);

    getch();
    return 0;
}