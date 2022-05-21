//WAP to add two matrices a[2][3],b[2][3] and store in c[2][3]
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter numbers:");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("Enter another numbers:");
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		printf("The product of above matrices is:");
	printf("\n");
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{	
				c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}