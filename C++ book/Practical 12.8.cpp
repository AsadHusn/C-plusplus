#include<stdio.h>
int main()
{
	char s;
	do
	{
	printf("Enter the state of your telephone line\n(W for Working & D for Dead)");
	scanf("%c",&s);
	}
	while(s!='w'&&s!='d');
	switch(s)
	{
		case 'w':
			printf("Telephone is Working.");
			break;
		case 'd':
			printf("Telephone is Dead.");
			break;
	}
}
