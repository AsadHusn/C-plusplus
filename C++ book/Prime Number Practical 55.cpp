#include<stdio.h>
int main()
{
	int n,d,p=1;
	printf("Enter a number:");
	scanf("%d",&n);
	d=2;
	while(d<=n/2)
	{
		if(n%d==0)
		p=0;
		d++;
	}
	if(p==0)
	printf("Not a prime number");
	else
	printf("Prime number");
}
