#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	switch(n%2)
	{
		case 1:
			printf("Odd number");
			break;
			case 0:
				printf("Even number");
				break;
	}
}
