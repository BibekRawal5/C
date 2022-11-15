#include<stdio.h>
#include<conio.h>
main()
{
	int mat1[10][10],mat2[10][10],a,b,m,n,i,j;
	printf("Enter row and column of 1st matrix:");
	scanf("%d %d",&a,&b);
	printf("Enter elements in matrix1:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
		printf("Enter row and column of 2nd matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter elements in matrix1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	int sum[10][10],diff[10][10],mul[10][10];
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//		{
//			sum[i][j]=mat1[i][j]+mat2[i][j];
//			diff[i][j]=mat1[i][j]-mat2[i][j];
//	   } 
//	}
//	if(a==m && b==n)
//	{
//	printf("The sum is:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//		{
//			printf("%d\t",sum[i][j]);
//	}
//	printf("\n");
//}
//}
//else
//printf("The sum is not possible.\n");	
//	if(a==m&&b==n)
//	{
//	printf("The diference is:\n");
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//		{
//			printf("%d\t",diff[i][j]);
//	}
//	printf("\n");
//}
//}
//else
//printf("The difference  is not possible.\n");	
		int k;
	if(b==m)
	{
		for(i=0;i<a; i++)
		{
			for(j = 0 ; j< n; j++)
			{
				int sum = 0;
				for(k = 0; k < m; k++)
				{
					sum += mat1[i][k] * mat2[k][j]; 
				}
				mul[i][j] = sum;
			}
		}
	
		printf("Multiplication : \n");
		for(i=0;i<a;i++)
		{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
	else{
		
	printf("Multiplication is not possible\n");
	
	}
}