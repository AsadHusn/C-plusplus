#include<stdio.h>
int main()
{
	int  a,b,c,max;
	printf("Enter 1st number:\t");
	scanf("%d",&a);
	printf("Enter 2nd number:\t");
	scanf("%d",&b);
	printf("Enter 3rd number:\t");
	scanf("%d",&c);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("The maximum number is %d",max);
}
