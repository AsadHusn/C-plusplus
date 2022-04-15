#include<stdio.h>
int main()
{
	char name[15],gender[6];
	int age;
	float height;
	printf("Enter name of Student ?");
	scanf("%s",name);
	printf("Enter sex of student ?");
	scanf("%s",gender);
	printf("Enter age of student ?");
	scanf("%d",&age);
	printf("Enter height of stduent ?");
	scanf("%f",&height);
	printf("\n Name:\t%s\nSex:\t%s\nAge:\t%d\nHeight:\t%f",name,gender,age,height);
	
}

