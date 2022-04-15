#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter integer:");
	scanf("%d\t%d\t%d",&a,&b,&c);
	a>b&&a>c;
	printf("%d",a);
	b>a&&b>c;
	printf("%d",b);
}
