#include <stdio.h>

int main (void)
{
    int m1[10][10], m2[10][10],k,i,j,m,n,prod[5][5] = {}, sum = 0;
    printf("m and n");
    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
    {
        for(j =0 ; j <n; j++ )
        {
            scanf("%d", &m1[i][j]);
        }
    }

    
    for(i = 0; i < m; i++)
    {
        for(j =0 ; j <n; j++ )
        {
            scanf("%d", &m2[i][j]);
        }
    }

    
    for(i = 0; i < m; i++)
    {
        for(j =0 ; j <n; j++ )
        {
            sum =0;
            for(k = 0; k < n; k++)
            {
            sum += m1[i][k] * m2[k][j];  
            }
            prod[i][j] = sum;
        }
    }

    printf("product \n");
    for(i = 0; i < m; i++)
    {
        for(j =0 ; j <n; j++ )
        {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
}