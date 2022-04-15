#include<stdio.h>
int main()
{
	int n,p,c,res;
	printf("Enter an integer:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&p);
	c=res=1;
	do
	{
		res=res*n;
		c++;
	}while(c<=p);
	printf("%d",res);
}
