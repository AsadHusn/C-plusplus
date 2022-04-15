#include<stdio.h>
int main()
{
	int n,j;
	for(n=1;n<=5;n++)
	{
		for(j=1;j<=n;j++)
		printf("%d\t",j*j);
		printf("\n");
	}
}
