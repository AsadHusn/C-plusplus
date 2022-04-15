#include<stdio.h>
int main()
{
	int n,s;
	float avg;
	s=0;
	for(n=1;n<=10;n++)
	{
	printf("%d\n",n);
	s=s+n;
	}
	avg=s/10.0;
	printf("Average: %f",avg);
}
