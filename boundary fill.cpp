#include<stdio.h>
#include<graphics.h>

 
void boundaryfill(int x,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
}
}

int main()
{
int gm,gd=DETECT;
initgraph(&gd, &gm, "");
rectangle(50,50, 250, 250);
boundaryfill(150,150,4,15);
delay(5000);
getch();
closegraph();
return 0;
}
