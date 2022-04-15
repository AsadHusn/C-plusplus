#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter first number:");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	(x>y)?printf("%d is greater",x):printf("%d is greater",y);
}
