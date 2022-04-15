#include<stdio.h>
int main()
{
	int x,n;
	for(x=1;x<=5;x++)
	{
		printf("Enter a number:");
		scanf("%d",&n);
		if(n<=0)
		break;
		printf("You entered %d\n",n);
	}
}
