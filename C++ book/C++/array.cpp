#include<stdio.h>
#include<string>
int main()
{
	int n[3],i;
	for(i=0;i<3;i++)
	{
		printf("Enter marks of student:%d ",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("\nMarks of student %d\: ",i+1);
		printf("%d",n[i]);
	}
	int sum=n[0]+n[2]+n[1]; 
	printf("\nSum is %d",sum);
}
