#include<stdio.h>
int main()
{
	int n,j;
	n=1;
	while(n<=5)
	{
		j=1;
		while(j<=n)
		{
		printf("*");
		j++;
		}
		printf("\n");
		n++;
	}
}
