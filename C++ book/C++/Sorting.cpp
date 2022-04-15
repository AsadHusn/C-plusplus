#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three integers values:\n");
	scanf("%d\t%d\t%d",&a,&b,&c);
	printf("Sorting by greater first\n");
	if(a>b>c)
	{
		printf("%d",a);
	}
	else if(b>c && b<a)
	printf("%d",b);
	else
	printf("%d",c);
	
}
