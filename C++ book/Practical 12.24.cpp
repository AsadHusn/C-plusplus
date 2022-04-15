#include<stdio.h>
int main()
{
	int n,c,len;
	printf("Enter number for table:");
	scanf("%d",&n);
	printf("Enter number for length:");
	scanf("%d",&len);
	for(c=1;c<=len;c++)
	printf("%d*%d=%d\n",n,c,n*c);
}
