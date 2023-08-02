#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

int main()
{
	double A[MAX][MAX] = {{2,4,-6}, {1,3,1}, {2,-4,-2}}, X[MAX], B[MAX]={-8, 10, -12};
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

for(i=0;i<n;i++)
		 {
		double tmp = A[i][i];
		
		for(l=0; l < n; l++)
		{
			A[i][l] = A[i][l]/tmp;
		}
		B[i] /= tmp;

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
					     	
					    }
					    B[j] -= tmp1 * B[i];
					    
				   }
			  }
			  
	printf("\nAfter Step %d : \n", i+1);
	for(l = 0; l < n; l++)
	{
		for(o = 0; o < n; o++)
		{
			printf("%lf\t", A[l][o]);
		}
		printf(": %lf", B[l]);
		printf("\n");
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
	
	for(j = 0; j < n; j++)
	{
		X[j] = B[j];
	}
	
	printf("\n");
	for(j = 0; j < n; j++)
		{
			printf("X[%d] = %lf\n",j, X[j]);
		}
	printf("\n");
}
