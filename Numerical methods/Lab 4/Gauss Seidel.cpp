#include <stdio.h>
#include <math.h>

#define MAX 10

int main()
{
	double A[MAX][MAX] = {{2, 1, 1}, {3,5,2}, {2,1,4}}, X[MAX], B[MAX]={5,15,8};
	int i=0, j=0,k = 0, iter = 5, n = 3;
	
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
	
	printf("Enter no of iterations: ");
	scanf("%d", &iter);	
	
	while(k < iter)
	{
		printf("Iteration %d :\n", k);
		
		for(j = 0; j < n; j++)
		{
			X[j] = B[j];
			for(i = 0 ; i < n; i++)
			{
				if(i != j)
					X[j] -= A[j][i] * X[i];
			}	
			X[j] /= A[j][j];
		}
		
		for(j = 0; j < n; j++)
		{
			printf("X[%d] = %lf\n",j, X[j]);
		}
		printf("\n");
		k++;
	}
	
	printf("\n");
}
