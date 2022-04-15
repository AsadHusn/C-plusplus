#include<stdio.h>
int main()
{
	float salary,bonus;
	int grade;
	printf("Enter your salary:");
	scanf("%f",&salary);
	printf("Enter your grade:");
	scanf("%d",&grade);
	if(grade>15)
	bonus=salary*50.0/100.0;
	else
	bonus=salary*25.0/100.0;
	salary=salary+bonus;
	printf("Your total salary is=%.f",salary);
}
