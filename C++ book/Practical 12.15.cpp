#include<stdio.h>
int main()
{
	int a,b,r;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	r=1;
	do
	{
		r=r*a;
		r++;
	}
	while(r<=b);
	printf("Result is %d",r);
}
