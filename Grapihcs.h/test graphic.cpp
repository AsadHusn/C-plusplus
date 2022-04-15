#include<graphics.h>
int main()
{
	int gd=DETECT;
	int gr;
	initgraph(&gd,&gr,"c:\\tc\\bgi");
	arc(200,200,0,60,60);
	system("pause");
	closegraph();
}
