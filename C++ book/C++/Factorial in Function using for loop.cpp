#include<stdio.h>
void factorial(int n);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	factorial(x);
}
void factorial(int n)
{
	 int f,i;
	 f=1;
	 for(i=1;i<=n;i++)
	 {
	 	f=f*i;
	 }
	 printf("Factorial   %d",f);
}
