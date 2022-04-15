#include<stdio.h>
int main()
{
	int u,i;
	for(u=1;u<=5;u++)
	{
		for(i=1;i<=5;i++)
		{
			if((u+i)%2==0)
			printf("%c",515);
			else
			printf(" ");
		}
		printf("\n");
	}
}
