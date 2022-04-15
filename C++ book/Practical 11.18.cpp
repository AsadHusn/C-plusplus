#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:\t");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("The character is capital letter");
	else if(ch>='a'&&ch<='z')
	printf("The character is small case letter");
	else if(ch>='0'&&ch<='9')
	printf("The character is digit");
	else
	printf("The character is a symbol");
}
