#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&f);
	c=5.0/9.0*(f-32);
	printf("%f Fahrenheit =%f Centigrade",f,c);
}
