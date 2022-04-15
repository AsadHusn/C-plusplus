#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,i;
	long sum;
	sum=0;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+pow(x,i);
	printf("Sum=%d",sum);
}
