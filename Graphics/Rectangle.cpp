#include<graphics.h>
int main()
{
	initwindow(600,600,"Asad windows");
	setcolor(YELLOW);
	rectangle(100,100,400,400);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(101,101,YELLOW);
	system("pause");
	closegraph();
}
