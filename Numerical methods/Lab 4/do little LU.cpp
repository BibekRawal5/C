#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

int main()
{
	double A[MAX][MAX] = {{3,2,1}, {2,3,2}, {1,2,3}},Z[MAX], X[MAX], B[MAX]={10, 14, 14}, L[MAX][MAX], U[MAX][MAX];
	int i=0, j=0, k=0, l=0, o = 0, n = 3;
	
	printf("Enter the no of equation: ");
	scanf("%d", &n);
	
	printf("Enter the Coefficient matrix: ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%lf", &A[i][j]);
		}
	}
	
	printf("Enter the Contstant matrix: ");
	for(i = 0; i < n ; i++)
		scanf("%lf", &B[i]);
	
	for(j = 0; j <n; j++)
	{
		U[0][j] = A[0][j];
		L[j][j] = 1;
		L[j][0]	= A[j][0]/U[0][0];
	}
	
	for(j = 1; j < n; j++)
	{
		for(i = 1; i <= j; i++)
		{
			U[i][j] = A[i][j];
			double tmp = 0;
			for(k = 0; k < i ; k++)
			{
				tmp += L[i][k] * U[k][j];
			} 
			U[i][j] -= tmp;
		}
		
		
		for(i = j + 1; i < n; i++)
		{
			double tmp = 0;
			for(k = 0; k < j; k++)
			{
				tmp += L[i][k] * U[k][j];	
			} 
			tmp = (A[i][j] - tmp)/U[j][j];
			L[i][j] = tmp;
		}
		
	}
	
	printf("\nUpper Triangular Matrix : \n");
	for(l = 0; l < n; l++)
	{
		for(o = 0; o < n; o++)
		{
			printf("%lf\t", U[l][o]);
		}
		printf("\n");
	}
	
	printf("\nLower Triangular Matrix : \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%lf\t", L[i][j]);
		}
		printf("\n");
	}
	
	for(j = 0; j < n; j++)
	{
		Z[j] = B[j];
		for(i = 0 ; i < j; i++)
		{
			Z[j] -= L[j][i] * Z[i];
		}
		Z[j] /= L[j][j];
	}
	
	for(j = n-1; j>= 0; j--)
	{
		X[j] = Z[j];
		
		for(i = j; i < n-1; i++)
		{
			X[j] -= U[j][i+1] * X[i+1];
		}
		X[j] /= U[j][j];
	}
	
	
	printf("\n");
	for(j = 0; j < n; j++)
		{
			printf("Z[%d] = %lf\n",j, Z[j]);
		}
	printf("\n");
	
	printf("\n");
	for(j = 0; j < n; j++)
		{
			printf("X[%d] = %lf\n",j, X[j]);
		}
	printf("\n");
}
