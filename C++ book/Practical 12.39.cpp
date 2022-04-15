#include<stdio.h>
int main()
{
	int n,m,j,sum;
	printf("Enter the ending integer:");
	scanf("%d",&n);
	printf("Integer\tSum\n");
	for(m=1;m<=n;m++)
	{
		sum=0;
		for(j=1;j<=m;j++)
		{
			sum=sum+j;
		}
			printf("%d\t\t%d\n",m,sum);
	}
}
