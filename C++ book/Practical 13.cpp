#include<stdio.h>
int main()
{
	int A,B,C;
	printf("Enter value of A:");
	scanf("%d",&A);
	printf("Enter value of B:");
	scanf("%d",&B);
	C=A*A+B*B+2*A*B;
	printf("Calculated value of C=%d",C);
}
