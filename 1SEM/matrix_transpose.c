// print matrix and its transpose

#include <stdio.h>

int main ()
{
    int matrix[3][3], transpose[3][3];

    printf("Enter the elemnts of matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix[%i][%i] :", i, j);
            scanf("%i", &matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
        
    }

    printf("The matrix given is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("The transpose matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i\t", transpose[i][j]);
        }
        printf("\n");
    }

}