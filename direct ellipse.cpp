#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	int x_center, y_center, y, i, a, b;
	
	printf("Enter the center point: ");
	scanf("%d%d", &x_center, &y_center);
	
	printf("Enter x and y radius: ");
	scanf("%d%d", &a, &b);
	
	for(i = x_center - a; i <= x_center; i++ )
	{
		y = sqrt(pow(a,2)*pow(b,2) - (pow(i-x_center,2) * pow(b,2)))/a;
		putpixel(i,y+y_center,RED);
		putpixel(i,y_center-y,BLUE);
		delay(50);
	}
	
	for(i = x_center + a; i >= x_center; i-- )
	{
		y = sqrt(pow(a,2)*pow(b,2) - (pow(i-x_center,2)) * pow(b,2))/a;
		putpixel(i,y+y_center,WHITE);
		putpixel(i,y_center-y,GREEN);
		
		delay(50);
	}
	
	getch();
	getch();
	closegraph();

}

