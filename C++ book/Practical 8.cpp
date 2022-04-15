#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,temp;
	x=126;
	y=56;
	printf("Values before interchange\n");
	printf("Value x=%d\n",x);
	printf("Value y=%d\n",y);
	temp=x;
	x=y;
	y=temp;
	y=temp;
	printf("Values after interchange\n");
	printf("Value x=%d\n",x);
	printf("Value y=%d",y);
}
