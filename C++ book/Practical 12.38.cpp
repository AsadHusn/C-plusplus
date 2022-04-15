#include<stdio.h>
int main()
{
	int n,m;
	m=4;
	do
	{
		n=m;
		do
		{
			printf("%d\t",m);
			n--;
		}
			while(n>=1);
			printf("\n");
			m--;
	}
	while(m>=1);
}
