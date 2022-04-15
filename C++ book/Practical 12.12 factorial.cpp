#include<stdio.h>
int main()
{
	int c,n,f;
	c=1;
	f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		f=f*c;
		c++;
	}
	while(c<=n);
	printf("Factorial of %d is %d",n,f);
}
