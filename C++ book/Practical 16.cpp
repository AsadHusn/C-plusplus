#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float area,s;
	printf("Enter the first side:\t");
	scanf("%d",&a);
	printf("Enter the second side:\t");
	scanf("%d",&b);
	printf("Enter the third side:\t");
	scanf("%d",&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle=\t%f",area);
}
