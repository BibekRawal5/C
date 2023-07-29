#include <graphics.h>
#include <stdio.h>

int transform(int cmt[][3], int object[][4], int n)
{
	int  i, j, k =0, result[3][n];
	int temp = 0;
	if(n != 4)
	{
		printf("Cannot perform multiplication\n");
		return 1;
	}
	
	for(i = 0; i < 3; i++)
	{	
		for(j = 0; j < n; j++)
		{
			temp = 0;
			for(k = 0; k < 3; k++)
				temp += cmt[i][k] * object[k][j]; 
			
			result[i][j] = temp;
		}
	}
	
	rectangle(result[0][0], result[1][0], result[0][1], result[1][1]);
	
	
}

int main()
{
	int n = 4,i,j,  gd=DETECT, gm, cmt[3][3];
	initgraph(&gd, &gm, (char *)"");
	int obj[3][4] = {{50, 150, 50, 150}, {50, 150, 150, 50}, {1, 1, 1, 1}};
	rectangle(50, 50, 150, 150);
	printf("Enter the c.t.m: ");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &cmt[i][j]);
	transform(cmt, obj, n);
	getch();
	closegraph();
	return 0;
	
}
