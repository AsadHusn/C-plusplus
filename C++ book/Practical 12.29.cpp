#include<stdio.h>
int main()
{
	int fail,full,pass,total,marks,c;
	float average=0.0;
	fail=full=total=pass=0;
	for(c=1;c<=5;c++)
	{
		printf("Enter marks:");
		scanf("%d",&marks);
		total=total+marks;
		if(marks<50)
		fail++;
		if(marks==100)
		full++;
		if(marks>=50&&marks<100)
		pass++;
	}
	average=total/5.0;
	printf("Average marks: %f\n",average);
	printf("Failed Students: %d\n",fail);
	printf("Pass Students: %d\n",pass);
	printf("Student who scored 100: %d",full);
}
