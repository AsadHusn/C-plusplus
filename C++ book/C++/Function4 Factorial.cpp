#include<stdio.h>
void factorial(int n);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	factorial(x);
}
void factorial(int n)
{
	int i;
	unsigned long long f;
	f=1;
	for(i=1;i<=n;i++)
		f*=i;
	printf("Factorial of %d is %d",n,f);
}
