#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

int main()
{
	double A[MAX][MAX] = {{1,2,3}, {2,8,22}, {3,22,82}}, U[MAX][MAX];
	int i=0, j=0, k=0, l=0, o = 0, n = 3;
	
	printf("Enter the no of equations / rows of matrix: ");
	scanf("%d", &n);
	
	printf("Enter the Coefficient matrix: ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%lf", &A[i][j]);
		}
	}
	
	
	U[0][0] = sqrt(A[0][0]);
	
	for(i = 1; i < n; i++)
	{
		U[0][i] = A[0][i]/U[0][0];
	}
	
	for(j = 1; j < n; j++)
	{
		for(i = 1; i <= j; i++)
		{
			double tmp = A[i][j];
			for(k = 0; k < i ; k++)
			{
				tmp -= U[k][i]*U[k][j];
			} 
			if(i < j)
				U[i][j] = tmp / U[i][i];
			if(i == j)
				U[i][j] = sqrt(tmp);
		}
		
	}
	
	printf("\nUpper Triangular Matrix : \n");
	for(l = 0; l < n; l++)
	{
		for(o = 0; o < n; o++)
		{
			printf("%.3lf\t", U[l][o]);
		}
		printf("\n");
	}
	
	
	printf("\nLower Triangular Matrix : \n");
	for(l = 0; l < n; l++)
	{
		for(o = 0; o < n; o++)
		{
			printf("%.3lf\t", U[o][l]);
		}
		printf("\n");
	}
	
}
