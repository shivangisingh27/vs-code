#include <graphics.h>
#include <conio.h>
 
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(200,200,100);
	getch();
	closegraph();
} 
