#include<stdio.h>
int main()
{
	float x,y;
	char op;
	printf("Enter first number, operator, second number and press Enter\n");
	scanf("%f%c%f",&x,&op,&y);
	switch(op)
	{
		case '+':	printf("%.2f",x+y);	break;
		case '-':	printf("%.2f",x-y);	break;
		case '*':	printf("%.2f",x*y);	break;
		case '/':	printf("%.2f",x/y);	break;
		default:	printf("Invalid Operator");
	}
}

