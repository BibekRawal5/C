#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	int x_center=200, y_center=200, y, i, a=100, b=80;
	
//	printf("Enter the center point: ");
//	scanf("%d%d", &x_center, &y_center);
//	
//	printf("Enter x and y radius: ");
//	scanf("%d%d", &a, &b);
	
	for(i = a; i <= 2* a; i++ )
	{
		y = sqrt(pow(a,2)*pow(b,2) - (pow(i,2)) * pow(b,2))/a;
		
		putpixel(x_center+i,y+y_center,RED);
		putpixel(x_center+i,y_center-y,BLUE);
		
		putpixel(x_center+2*i,y+y_center,RED);
		putpixel(x_center+2*i,y_center-y,BLUE);
		printf("%d\n",y);
//		delay(50);
	}
//	
//	for(i = x_center + a; i >= x_center; i-- )
//	{
//		y = sqrt(pow(a,2)*pow(b,2) - (pow(i-x_center,2)) * pow(b,2))/a;
//		putpixel(i,y+y_center,WHITE);
//		putpixel(i,y_center-y,GREEN);
////		delay(50);
//	}
	
	getch();
	getch();
	closegraph();

}

