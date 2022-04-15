#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two number:\t");
	scanf("%d %d",&x,&y);
	x>y?printf("%d is larger",x):printf("%d is larger",y);
}
