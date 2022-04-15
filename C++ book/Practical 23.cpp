#include<stdio.h>
int main()
{
	char ch;
	float area;
	printf("S- Compute Area of Square\nT- Compute Area of Triangle\nSelect your choice[S or T]?\n");
	scanf("%c",&ch);
	if(ch=='S'||ch=='s')
	{
		float side;
		printf("Enter side of square:");
		scanf("%f",&side);
		area=side*side;
		printf("Area of Square=%f",area);
	}
	else if(ch=='t'||ch=='T')
	{
		float base,height;
		printf("Enter base of Triangle:");
		scanf("%f",&base);
		printf("Enter height of Triangle:");
		scanf("%f",&height);
		area=0.5*base*height;
		printf("Area of Triangle=%f",area);
	}
	else
	printf("Invalid Choice");
}
