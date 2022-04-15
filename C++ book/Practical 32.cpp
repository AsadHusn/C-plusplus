#include<stdio.h>
int main()
{
	int average;
	printf("Enter average marks:");
	scanf("%d",&average);
	printf("Grade:");
	if(average>=90)	printf("A+");
	else if(average>=80)	printf("A");
	else if(average>=70)	printf("B");
	else if(average>=60)	printf("C");
	else if(average>=50)	printf("D");
	else if(average>=40)	printf("E");
	else	printf("F!");
}
