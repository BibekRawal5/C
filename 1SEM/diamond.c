#include <stdio.h>

int main()
{
    int i, j, row, k, l, space;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (l = i + 1 ; l <= row; l++)
        {
            printf(" ");
        }

        for (j = 1; j <= i *2 - 1; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }

    for (i = row - 1; i > 0; i--)
    {
        for (l = i + 1 ; l <= row; l++)
        {
            printf(" ");
        }

        for (j = 1; j <= i *2 - 1; j++)
        {
            printf("*");
        }

        printf("\n");
   
    }
}