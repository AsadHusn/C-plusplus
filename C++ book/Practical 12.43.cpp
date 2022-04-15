#include<stdio.h>
int main()
{
	int a,b,s;
	for(a=1;a<=5;a++)
	{
		for(s=1;s<=5-a;s++)
		printf(" ");
		for(b=1;b<=a;b++)
		printf("*");
	printf("\n");
	}
}
