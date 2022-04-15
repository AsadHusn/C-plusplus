#include<stdio.h>
int main()
{
	int x=10,y=4;
	do
	{
		x=x-2;
		y=y+4;
	printf("%d\t",x);
	}while(y<=16);
	x++;
	printf("%d\t%d",x,y);
}
