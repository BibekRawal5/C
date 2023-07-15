// C program for implementing
// Mid-Point Ellipse Drawing Algorithm

#include <stdio.h>
#include <graphics.h>
#include <stdio.h>

void plot(int xc, int yc, int x, int y);
void midptellipse(int rx, int ry, int xc, int yc)
{

	float dx, dy, d1, d2, x, y;
	x = 0;
	y = ry;

	// Initial decision parameter of region 1
	d1 = (ry * ry)
		- (rx * rx * ry)
		+ (0.25 * rx * rx);
	dx = 2 * ry * ry * x;
	dy = 2 * rx * rx * y;
	
	plot(xc, yc, x, y);
	// For region 1
	while (dx < dy) {

		// Print points based on 4-way symmetry
		plot(xc, yc, x, y);
		// Checking and updating value of
		// decision parameter based on algorithm
		if (d1 < 0) {
			x++;
			dx = dx + (2 * ry * ry);
			d1 = d1 + dx + (ry * ry);
		}
		else {
			x++;
			y--;
			dx = dx + (2 * ry * ry);
			dy = dy - (2 * rx * rx);
			d1 = d1 + dx - dy + (ry * ry);
		}
	}

	// Decision parameter of region 2
	d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5)))
		+ ((rx * rx) * ((y - 1) * (y - 1)))
		- (rx * rx * ry * ry);

	// Plotting points of region 2
	while (y >= 0) {

		// printing points based on 4-way symmetry
		plot(xc,yc,x,y);
		// Checking and updating parameter
		// value based on algorithm
		if (d2 > 0) {
			y--;
			dy = dy - (2 * rx * rx);
			d2 = d2 + (rx * rx) - dy;
		}
		else {
			y--;
			x++;
			dx = dx + (2 * ry * ry);
			dy = dy - (2 * rx * rx);
			d2 = d2 + dx - dy + (rx * rx);
		}
	}
}

void plot(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc-y, WHITE);
}
// Driver code
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	// To draw a ellipse of major and
	// minor radius 15, 10 centered at (50, 50)
	midptellipse(170, 80, 200, 200);
	getch();
	getch();

	return 0;
}

