#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float sqroot;
	printf("Enter a number:\t");
	scanf("%d",&x);
	if(x>=0)
	{
		sqroot=sqrt(x);
		printf("The square root of %d is=%f",x,sqroot);
	}
	else
	printf("Invalid Input");
}
