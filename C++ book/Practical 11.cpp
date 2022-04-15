#include<stdio.h>
int main()
{
	float d,m,v;
	printf("Enter mass of cylinder:\t");
	scanf("%f",&m);
	printf("Enter volume of cylinder:");
	scanf("%f",&v);
	d=m/v;
	printf("Dentisy of cylinder=%f",d);
}
