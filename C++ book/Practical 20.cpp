#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer value:");
	scanf("%d",&n);
	if(n%2==0) printf("Even Value");
	if(n%2==1) printf("Odd Value");
}
