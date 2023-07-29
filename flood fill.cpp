#include<stdio.h>
#include<graphics.h>

 
void flood(int x, int y, int new_col, int old_col)
{
    // check current pixel is old_color or not
    if (getpixel(x, y) == old_col) {
 
        // put new pixel with new color
        putpixel(x, y, new_col);
 
        // recursive call for bottom pixel fill
        flood(x + 1, y, new_col, old_col);
 
        // recursive call for top pixel fill
        flood(x - 1, y, new_col, old_col);
 
        // recursive call for right pixel fill
        flood(x, y + 1, new_col, old_col);
 
        // recursive call for left pixel fill
        flood(x, y - 1, new_col, old_col);
    }
}
int main()
{
int gm,gd=DETECT;
initgraph(&gd, &gm, "");
rectangle(50,50, 250, 250);
flood(150,150,10,0);
delay(5000);
getch();
closegraph();
return 0;
}
