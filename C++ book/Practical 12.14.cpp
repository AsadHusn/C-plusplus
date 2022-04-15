#include<stdio.h>
int main()
{
	int s,e;
	printf("Enter starting number:\n");
	scanf("%d",&s);
	printf("Enter ending number:");
	scanf("%d",&e);
	do
	{
		if(s%2!=0)
		printf("%d\n",s);
		s++;
	}
	while(s<=e);
}
