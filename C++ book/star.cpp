#include<stdio.h>
int main()
{
	int space,stars,rows,i,e;
	printf("Enter rows:");
	scanf("%d",&rows);
	stars=1;
	space=rows-1;
	for(i=1;i<rows*2;i++)
	{
		for(e=1;e<=space;e++)
		printf(" ");
		for(e=1;e<stars*2;e++)
		printf("*");
		printf("\n");
	if(i<rows)
	{
		stars++;
		space--;
	}
	else
	{
		stars--;
		space++;
	}
	}
}
