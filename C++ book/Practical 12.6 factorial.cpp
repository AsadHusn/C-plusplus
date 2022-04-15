#include<stdio.h>
int main()
{
	int n,c,f;
	c=1;
	f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(c<=n)
	{
		f=f*c;
		c++;
	}
	printf("Factorial of %d is %d",n,f);
}
