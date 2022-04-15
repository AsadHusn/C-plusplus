#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,R,area,vol;
	printf("Enter first side of triangle:");
	scanf("%f",&a);
	printf("Enter second side of triangle:");
	scanf("%f",&b);
	printf("Enter 3rd side of triangle:");
	scanf("%f",&c);
	printf("Enter radius of sphere:");
	scanf("%f",&R);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	vol=(4.0/3.0)*3.1415*R*R*R;
	if(area>vol)
	{
		printf("\nVolume of Sphere=%f\n",vol);
		printf("Area of triangle=%f",area);
	}
	else
	{
		printf("\nArea of triangle=%f",area);
		printf("\nVolume of Sphere=%f",vol);
	}
}
