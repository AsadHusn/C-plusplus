#include<stdio.h>
int main()
{
	int n,m,j,f;
	printf("Enter ending number:");
	scanf("%d",&n);
	printf("Integer\tFactorial\n");
	for(m=1;m<=n;m++)
	{
		f=1;
		for(j=1;j<=m;j++)
		{
			f=f*j;
		}
	printf("%d\t%d\n",m,f);
	}
}
