#include<stdio.h>
int main()
{
	float n,s;
	n=1.0;
	s=0;
	while(n<=99)
	{
		s=s+1/n;
		n=n+2;
	}
	printf("Sum of Series =%f",s);
}
