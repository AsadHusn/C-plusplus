#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		j=i;
		while(j<=7)
		{
			printf("*");
			j++;
		}
		printf("\n");
	}
}
