#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d\t%d\t%d",&a,&b,&c);
	if(a<b)
		if(a<c)
		printf("%d is the smallest number",a);
		else
		printf("%d is the smallest number",c);
	else
		if(b<c)
		printf("%d is the smallest number",b);
		else
		printf("%d is the smallest number",c);
}
