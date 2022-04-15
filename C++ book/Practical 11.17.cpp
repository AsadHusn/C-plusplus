#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a vovel:\t");
	scanf("%c",&ch);
	if(ch=='A'||ch=='a'||ch==ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
	printf("Yeah! It is vovel");
	else
	printf("No, its not a vovel");
}
