#include <stdio.h>

int main()
{
    int i, j, row, k, l, space, sum;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        sum = 0;
        for(space = i + 1; space <= row; space++)
        {
            printf(" ");
        }

        printf("*");

        for(j = 1; j <= i *2 - 2; j++)
        {
            printf(" ");
            sum++;
        }

        if (sum != 0)
            printf("*");

        printf("\n");
    }

    for (i = row - 1; i > 0; i--)
    {
        sum = 0;
        for(space = i + 1; space <= row; space++)
        {
            printf(" ");
        }

        printf("*");

        for(j = 1; j <= i *2 - 2; j++)
        {
            printf(" ");
            sum++;
        }

        if (sum != 0)
            printf("*");

        printf("\n");
    }
}