#include<stdio.h>
int main()
{
	int n,f;
	printf("Enter an integer:");
	scanf("%d",&n);
	f=1;
	for(;n>1;n--)
	{
		f=f*n;
	}
		printf("Factotial = %d",f);
}
