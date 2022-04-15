#include<stdio.h>
#include<math.h>
int main()
{
	float number;
	positive:
		printf("Please Enter a positive number:");
		scanf("%f",&number);
		if(number<0)
		goto positive;
		else
		printf("square root of %f is %f",number,sqrt(number));
}
