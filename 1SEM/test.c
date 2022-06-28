#include <stdio.h>

int main()
{
    int i, j = 1, row, k = 1, l = 1, space, start;

    printf("Enter: ");
    scanf("%d",&row);

    for ( i = 1; i <= row; i++)
    {
        j = 1;
        
        for(k = 1;  k <= i; k++)
        {
            printf("%d", l);
            j++;
            l++;
            if (j <= i)
            {
                printf("*");
            }
        }

        printf("\n");
    }
  
    l -= 1;
    for ( i = 1; i <= row; i++)
    {
        j = 1;
        
        for(k = 1;  k <= i; k++)
        {
            printf("%d", l);
            j++;
            l--;
            if (j <= i)
            {
                printf("*");
            }
        }

        printf("\n");
    }
     
}