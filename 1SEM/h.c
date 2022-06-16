#include <stdio.h>

int main ()
{
    for ( int i = 0; i < 30; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("# ");
        }

        if ( i >= 12 && i <= 18)
        {
            for ( int k = 0; k < 10; k++)
            {
                printf("# ");
            }
            goto middle;
        }
        
        for(int l = 0; l < 10; l++ )
        {
            printf("  ");
        }
        
        middle:
        for(int m = 0; m < 10; m++ )
        {
            printf("# ");
        }
        
        printf("\n");
    }
}