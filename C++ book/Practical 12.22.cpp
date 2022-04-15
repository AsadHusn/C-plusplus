#include<stdio.h>
int main()
{
	long int n,p;
	p=1;
	for(n=1;n<=10;n=n+2)
	p=p*n;
	printf("%d",p);
}
