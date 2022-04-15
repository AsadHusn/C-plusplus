#include<stdio.h>
int main()
{
	int n,sum;
	n=1;
	sum=0;
	while(n<=5)
	{
		printf("%d\n",n);
		sum=sum+n;
		n=n+1;
	}
	printf("Sum=%d",sum);
}
