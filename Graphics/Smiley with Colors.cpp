#include<graphics.h>
int main()
{
	initwindow(600,600,"Asad windows");
	
//	main circle
	setcolor(YELLOW);
	circle(300,300,200);
	
//	nose
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(300,320,10);
	floodfill(300,320,YELLOW);
	
//	left eye
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(200,250,20);
	floodfill(200,250,YELLOW);
	
//	left eye shadow
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	circle(200,250,10);
	floodfill(200,250,BLACK);
	
//	right eye
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(400,250,20);
	floodfill(400,250,YELLOW);

//	right eye shadow
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	circle(400,250,10);
	floodfill(400,250,BLACK);

//	smile
	setcolor(YELLOW);
	arc(300,300,210,330,140);
	
	system("pause");
	closegraph();
}
