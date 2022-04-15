#include<stdio.h>
int main()
{
	int n,sum;
	n=2;
	sum=0;
	do
	{
		sum=sum+n;
		printf("%d\n",n);
		n=n+2;
	}while(n<=10);
	printf("Sum is = %d",sum);
}
