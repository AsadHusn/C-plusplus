#include<stdio.h>
int main()
{
	float k;
	double m;
	printf("Enter distance in kilometers:");
	scanf("%f",&k);
	m=k*1000;
	printf("\n%f kilometers=%f meters",k,m);
}
