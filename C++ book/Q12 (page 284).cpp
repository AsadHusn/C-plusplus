#include<stdio.h>
int main()
{
	int a,b,op;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Press\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
	scanf("%d",&op);
	switch(op)
{
	case 1:
		printf("Sum=%d",a+b);
		break;
		case 2:
			printf("Subtraction=%d",a-b);
			break;
			case 3:
				printf("Multiplication=%d",a*b);
				break;
				case 4:
					if(a>b)
					printf("Division=%d",a/b); 
					else
					printf("Division=%d",b/a);
					break;
					default:
						printf("Wrong Choice");
}
}
