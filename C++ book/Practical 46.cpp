#include<stdio.h>
int main()
{
	int n;
	n=1;
	do
	{
		printf("%d\n",n);
		n=n+n;
	}while(n<=64);
}
