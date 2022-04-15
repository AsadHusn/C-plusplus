#include<stdio.h>
int main()
{
	int temp;
	printf("Enter Today's Temperature:");
	scanf("%d",&temp);
	if(temp>=35)
	printf("Hot Day");
	else if(temp>=25&&temp<35)
	printf("Pleasant Day");
	else
	printf("Cool Day");
}
