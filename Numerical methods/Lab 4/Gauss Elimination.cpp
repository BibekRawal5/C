#include <stdio.h>
#include <math.h>

#define MAX 10

int main()
{
	double A[MAX][MAX] = {{20, 15, 10}, {-3, -2.249, 7}, {5,1,5}}, X[MAX], B[MAX]={4.5,1.751,9};
	int i=0, j=0, k=0, n = 3;
	
//	printf("Enter the no of equation: ");
//	scanf("%d", &n);
//	
//	printf("Enter the Coefficient matrix: ");
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			scanf("%lf", &A[i][j]);
//		}
//	}
//	
//	printf("Enter the Contstant matrix: ");
//	for(i = 0; i < n ; i++)
//		scanf("%lf", &B[i]);
//		
	
	for(i = 1; i < n; i++)
	{
		double tmp1 = A[i-1][i-1];
		for(j = i; j < n; j++)
		{
			double tmp2 = A[j][i-1];
			for(k = 0; k< n; k++)
			{	
				double div = A[i-1][k]/tmp1 * tmp2;
				A[j][k] -= div;				
			}
			
			B[j] -= B[i-1]/tmp1 * tmp2;
		}
	}
	
	printf("\nFINAL ADJACENT Matrix : \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%lf\t", A[i][j]);
		}
		printf(": %lf", B[i]);
		printf("\n");
	}
	
	for(j = n-1; j>= 0; j--)
	{
		X[j] = B[j];
		
		for(i = j; i < n-1; i++)
		{
			X[j] -= A[j][i+1] * X[i+1];
		}
		X[j] /= A[j][j];
	}
	
	printf("\n");
	for(j = 0; j < n; j++)
		{
			printf("X[%d] = %lf\n",j, X[j]);
		}
	printf("\n");
}
