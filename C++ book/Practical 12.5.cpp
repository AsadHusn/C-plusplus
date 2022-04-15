#include<stdio.h>
int main()
{
	int n,c;
	printf("Enter a number:");
	scanf("%d",&n);
	c=1;
	while(c<=10)
	{
		printf("%d*%d=%d\n",n,c,n*c);
		c++;
	}
}
