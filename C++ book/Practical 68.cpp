#include<stdio.h>
using namespace std;
int main()
{
	void rec_sqr(int,int);
	rec_sqr(4,4);
	rec_sqr(9,5);
	rec_sqr(3,7);
}
void rec_sqr(int h,int w)
{
	int x,y,c;
	printf("\n");
	x=1;
	while(x<=w)
	{
		printf("#");
		x++;
	}
	printf("\n");
	y=1;
	while(y<=h)
	{
		c=0;
		printf("*");
		while(c<=(w-3))
		{
			printf(" ");
			c++;
		}
		printf("*\n");
		y++;
	}
	x=1;
	while(x<=w)
	{
		printf("*");
		x++;
	}
	printf("\n");
}
