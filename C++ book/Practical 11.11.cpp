#include<stdio.h>
int main()
{
	int score;
	printf("Enter your test score:");
	scanf("%d",&score);
	if(score>=90)
	printf("Grade is A");
	else if(score>=80)
	printf("Grade is B");
	else if(score>=70)
	printf("Grade is C");
	else if(score>=60)
	printf("Grade is D");
	else
	printf("Grade is F");
}
