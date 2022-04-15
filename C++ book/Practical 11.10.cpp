#include<stdio.h>
int main()
{
	int salary;
	float net;
	printf("Enter salary:");
	scanf("%d",&salary);
	if(salary>=20000)
	net=salary-(salary*7.0/100.0);
	else if(salary>=10000)
	net=salary-1000;
	else
	net=salary;
	printf("Your net salry is %.2f",net);
}
