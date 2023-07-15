#include<stdio.h>
#include<graphics.h>
 
void drawcircle(int x0, int y0, int radius)
{
    int y = radius;
    int x = 0;
    int p = 1-radius;
 
    while (x < y)
    {
putpixel(x0 + x, y0 + y, 255);
putpixel(x0 + y, y0 + x, 255);
putpixel(x0 - y, y0 + x, 255);
putpixel(x0 - x, y0 + y, 255);
putpixel(x0 - x, y0 - y, 255);
putpixel(x0 - y, y0 - x, 255);
putpixel(x0 + y, y0 - x, 255);
putpixel(x0 + x, y0 - y, 255);
 
if (p < 0)
{
    p += 2*x + 1;
}
 
else
{
    p += 2*(x-y--) + 1;
}

	x++;
    }
}
 
int main()
{
int gdriver=DETECT, gmode, error, x, y, r;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
 
printf("Enter radius of circle: ");
scanf("%d", &r);
 
printf("Enter co-ordinates of center(x and y): ");
scanf("%d%d", &x, &y);
drawcircle(x, y, r);

getch();
getch();
return 0;
}
