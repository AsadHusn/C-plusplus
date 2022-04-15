#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		printf("Enter a number:");
		scanf("%d",&b);
		if(b<=0)
		continue;
		printf("You Enter %d\n",b);
	}
}
