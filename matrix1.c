#include <stdio.h>

int main (void)
{
    int Matrix[2][3];
    int m, n;
    printf ("Enter value of the matrix elements\n");
    for (m=0 ; m<2 ; m++)
    {
        for (n=0 ; n<3 ; n++)
        {
            scanf("%i", &Matrix[m][n]);
        }
        printf("\n");
    }
    for (m=0 ; m<2 ; m++)
    {
        for (n=0 ; n<3 ; n++)
        {
            printf("%i\t", Matrix[m][n] );
        }
        printf("\n") ;
    }
}