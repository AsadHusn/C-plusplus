#include<stdio.h>
int main()
{
	int x,t,r;
	printf("Enter an integer:");
	scanf("%d",&x);
	r=0;
	for(t=x;t!=0;t=t/10)
	r=10*r+t%10;
	printf("Actual number is %d\n",x);
	printf("Reverse number is %d",r);
}
