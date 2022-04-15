#include<stdio.h>
int main()
{
	float area,radius,circumference;
	int choice;
	printf("Enter radius of cirle:");
	scanf("%f",&radius);
	printf("Enter 1 for area and 2 for circumference:");
	scanf("%d",&choice);
	if(choice==1)
	{
		area=3.141*radius*radius;
		printf("Area= %.2f",area);
	}
	else if(choice==2)
		{
	
		circumference=2*3.141*radius;
		printf("Circumference= %.2f",circumference);
		}
	else
	printf("Invalid choice");
}
