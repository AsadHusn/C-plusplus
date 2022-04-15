#include<stdio.h>
int main()
{
	int s,e,n,sum;
	printf("Enter starting number:");
	scanf("%d",&s);
	printf("Enter ending number:");
	scanf("%d",&e);
	n=s;
	while(n<=e)
	{
		if(n%2==0)
		printf("%d\n",n);
		n++;
	}
}
