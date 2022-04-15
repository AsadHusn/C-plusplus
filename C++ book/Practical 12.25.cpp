#include<stdio.h>
int main()
{
	int n,c;
	printf("Enter a number:");
	scanf("%d",&n);
	for(c=10;c>=1;c--)
	printf("%d*%d=%d\n",n,c,n*c);
}
