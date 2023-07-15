#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	int x_center, y_center, x,y, i, a, b;
	
	printf("Enter the center point: ");
	scanf("%d%d", &x_center, &y_center);
	
	printf("Enter x and y radius: ");
	scanf("%d%d", &a, &b);
	
	for(i = 0; i <= 360; i++ )
	{
		x = x_center + a*cos(i);
		y = y_center + b*sin(i);
		putpixel(x,y,WHITE);
	}
	
	
	getch();
	getch();
	closegraph();

}

