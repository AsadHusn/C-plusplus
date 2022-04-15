#include<stdio.h>
int main()
{
	int fact,n;
	printf("Enter an integer:");
	scanf("%d",&n);
	fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("Factorial is=%d",fact);
}
