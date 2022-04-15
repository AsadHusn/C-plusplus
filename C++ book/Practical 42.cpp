#include<stdio.h>
int main()
{
	int n;
	n=1;
		printf("Number\tSquare\tCube\n");
	do
	{
		printf("%d\t%d\t%d\n",n,n*n,n*n*n);
		n++;
	}while(n<=7);
}
