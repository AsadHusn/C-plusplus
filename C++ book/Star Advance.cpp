#include<stdio.h>
int main()
{
	int i,space,stars,j,rows;
	char c[99];
	printf("hOW mANY rOWS:?\nWhat shape you want:?\n");
	scanf("%d %s",&rows,&c);
	stars=1;
	space=rows-1;
	for(i=1;i<=rows*2;i++)
	{
		for(j=1;j<=space;j++)
		printf(" ");
		
		for(j=1;j<stars*2;j++)
		
		printf("%s",c);
		printf("\n");
		
		if(i<rows)
		{
		space--;
		stars++;
		}
		else
		{
		space++;
		stars--;
		}
	}
}
