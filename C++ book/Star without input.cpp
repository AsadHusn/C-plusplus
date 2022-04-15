#include<stdio.h>
int main()
{
	int r,i,s,st,m,n;
	r=10;
	s=r-1;
	st=1;
	for(i=1;i<=r*2;i++)
	{
		for(m=1;m<=s;m++)
		{
			printf(" ");
		}
		for(n=1;n<st*2;n++)
		{
			printf("*");
		}
		printf("\n");
		if(i<r)
		{
			s--;
			st++;
		}
		else
		{
			s++;
			st--;
		}
	}
}
