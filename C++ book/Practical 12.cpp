#include<stdio.h>
#define PI 3.1417
int main()
{
	float r,area,circum;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area=PI*r*r;
	circum=2*PI*r;
	printf("Area of circle=%f\n",area);
	printf("Circumference=%f",circum);
}
