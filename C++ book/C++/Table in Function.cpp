#include<stdio.h>
void table(int n);
int main()
{
	int x;
	scanf("%d",&x);
	table(x);
}
void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	printf("%d*%d=%d\n",n,i,n*i);
}
