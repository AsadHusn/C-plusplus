#include<stdio.h>
int main()
{
	int n,sum,c;
	sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	sum=sum+(c*c);
	printf("Sum=%d",sum);
}
