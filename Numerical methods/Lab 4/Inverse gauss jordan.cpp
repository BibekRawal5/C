#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

int main()
{
	double A[MAX][MAX] = {{1, -1, 1}, {2, 3, 0}, {0, -2,1}}, B[MAX][MAX];
	int i=0, j=0, k=0, l=0, o = 0, n = 3;
	
	printf("Enter the no of rows or columns: ");
	scanf("%d", &n);
	
	printf("Enter the Coefficient matrix: ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%lf", &A[i][j]);
		}
	}
	
	for(i = 0; i < n ; i++)
		for(j = 0; j < n; j++)
		{
			if(i == j)
				B[i][j] = 1;
			else
				B[i][j] = 0;
		}


	for(i=0;i<n;i++)
	{
		double tmp = A[i][i];
		
		for(l=0; l < n; l++)
		{
			A[i][l] /= tmp;
			B[i][l] /= tmp;
		}

		if(A[i][i] == 0.0)
		{
			printf("\n\t\tFree Variable\n");
			exit(1);
		}
		for(j=0;j<n;j++)
	    {
			if(i!=j)
			{
				double tmp1 = A[j][i]/A[i][i];
			    for(k=0;k<= n;k++)
			    {
					A[j][k] -= tmp1 * A[i][k];
			     	B[j][k] -= tmp1 * B[i][k];	
				}
					    
			}
		}
			  
		printf("\nAfter Step %d : \n", i+1);
		for(l = 0; l < n; l++)
		{
			for(o = 0; o < n; o++)
			{
				printf("%lf\t", A[l][o]);
			}
			printf(": ");
			
			for(o = 0; o < n; o++)
				printf("%lf\t", B[l][o]);
			printf("\n");
		}	
	}

	printf("\nInverse Matrix : \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%lf\t", B[i][j]);
		printf("\n");
	}
	
}
