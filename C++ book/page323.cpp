#include<stdio.h>
int main()
{
	int n=1;
	display:
		printf("%d\n",n);
		n++;
		if(n<=5)
		goto display;
}
