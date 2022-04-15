#include<stdio.h>
void power(int a,int b);
int main()
{
	int n,p;
	printf("Enter number and then it's power:\t");
	scanf("%d %d",&n,&p);
	power(n,p);
}
void power(int a,int b)
{
	int i,power;
	power=1;
	for(i=1;i<=b;i++)
	{
		power=power*a;
	}
	printf("Answer is %d",power);
}
