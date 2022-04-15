#include<stdio.h>
void max(int x,int y);
int main()
{
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d %d",&x,&y);
	max(x,y);
}
void max(int x,int y)
{
	if(x>y)
	printf("Maximum number is %d",x);
	else
	printf("Maximum number is %d" ,y);
}
