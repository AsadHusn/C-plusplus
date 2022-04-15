#include<stdio.h>
int main()
{
	char name[25],address[30];
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	printf("(Hint: Dont use space between name and address)\f\nWhat's your name:");
	scanf("%s",&name);
	printf("Enter your address:");
	scanf("%s",&address);
	printf("Your name is: %s\nYour age is: %d\nYour address is: %s",name,age,address);
}
