#include<stdio.h>
int main()
{
	int n,j,m;
	printf("Enter a number for Table:");
	scanf("%d",&n);
	j=1;
	while(j<=10)
	{
		m=n*j;
		printf("%d*%d=%d\n",n,j,m);
		j++;
	}
}
