#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the values of x and y-coordinate:\t");
	scanf("%d %d",&x,&y);
	if(x==0)
	{
		if(y==0)
		printf("The point lie on the origin");
		else
		printf("The Point lie on the y-axis");
	}
	else if(x>0)
	{
		if(y==0)
		printf("The point lie on the x-axis");
		else if(y>0)
		printf("The Point lies in the 1st quadrant");
		else
		printf("The point lies in the 4th quadrant");
	}
	else if(y==0)
	printf("The point lies on the x-axis");
	else if(y>0)
	printf("The point lies in 2nd quadrant");
	else
	printf("The point lies in 3rd quadrant");
}
