#include<stdio.h>
int main()
{
	float n,s;
	n=1.0;
	s=0;
	for(n=1;n<=50;n++)
	{
		s=s+1.0/n;
	}
	printf("Sum = %f",s);
}
