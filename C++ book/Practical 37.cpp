#include<stdio.h>
int main()
{
	int x,y;
	x=100;
	y=10;
	while(y<=100)
	{
		printf("%d\t%d\n",x,y);
		y=y+30;
		x=x-10;
	}
}
