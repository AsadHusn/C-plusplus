#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float average;
	printf("Enter Your marks\n");
	printf("English:");
	scanf("%d",&s1);
	printf("Udru:");
	scanf("%d",&s2);
	printf("Islamiyat:");
	scanf("%d",&s3);
	printf("Computer:");
	scanf("%d",&s4);
	printf("Physics:");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	average=total/5;
	printf("Total Marks=%d\nAverage Marks=%f",total,average);
}
