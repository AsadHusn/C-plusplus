#include<graphics.h>
int main()
{
	int gd=DETECT; 
	int gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	arc(200,200,0,360,150);
	arc(150,150,0,360,10);
	arc(250,150,0,360,10);
	arc(200,200,0,360,5);
	arc(200,250,180,360,30);
	system("pause");
	closegraph();
}
