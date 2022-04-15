#include<stdio.h>
void table(int n);
int main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	table(x);
}
void table(int n)
{
	int c;
	for(c=1;c<=10;c++)
	{
	printf("%d*%d=%d\n",n,c,n*c);
	}
}
