#include<stdio.h>
int main()
{
	int n,c,f;
	printf("Enter a number:");
	scanf("%d",&n);
	f=1;
	c=1;
	for(;c<=n;c++)
	f=f*c;
	printf("Factorial is %d",f);
}
