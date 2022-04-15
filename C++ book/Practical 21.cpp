#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%2==0&&n%3==0)
	printf("%d is divisible by 2&3",n);
}
