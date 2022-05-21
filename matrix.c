#include <stdio.h>

int main (void)
{
    int Matrix[9];
    int m;
    printf ("Enter value of the matrix elements\n");
    for (m=0 ; m<9 ; m++)
    {
        scanf("%i", &Matrix[m]);
    }
    int j;
    int row = 0;
    
    for (j=0 ; j<=8 ; j++)
    {
        printf("%i\t", Matrix[j] );
        row += 1;
        if ( row == 3 || row == 6 || row == 9 )
        {
           printf("\n");
        }
            
    }
}