#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n>0)
	printf("Positive number.");
	else if(n==0)
	printf("It's Zero");
	else
	printf("Negative number");
}
