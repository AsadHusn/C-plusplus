#include<stdio.h>
int main()
{
	int n,m,j;
	m=1;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		j=n*m;
		printf("%d*%d=%d\n",n,m,j);
		m++;
	}while(m<=10);
}
