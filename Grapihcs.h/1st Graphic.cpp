#include<graphics.h>
int main()
{
	int gd=DETECT;
	int gm;
	initgraph(&gd,&gm, "C:\\TC\\BGI");
	
	arc(250,250,0,180,100);
	
	system("pause");
	closegraph();
}
