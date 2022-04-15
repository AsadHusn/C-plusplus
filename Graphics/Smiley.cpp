#include<graphics.h>
int main()
{
	initwindow(600,600,"Asad windows");
	setcolor(YELLOW);
//	main circle
	circle(300,300,200);
//	nose
	circle(300,320,10);
//	left eye
	circle(200,250,20);
//	right eye
	circle(400,250,20);
//	smile
	arc(300,300,210,330,140);
	
	system("pause");
	closegraph();
}
