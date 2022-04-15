#include<stdio.h>
int main()
{
	int tab,i;
	for(tab=2;tab<=20;tab++)
	{
		printf("Table  of %d\n",tab);
		for(i=1;i<=10;i++)
		{
			printf("%d*%d=%d\n",tab,i,tab*i);
		}
	}
}
