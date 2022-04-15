#include<stdio.h>
#define PI 3.1415
int main()
{
	float volume,R,H;
	printf("Enter radius of cylinder:");
	scanf("%f",&R);
	printf("Enter height of cylinder:");
	scanf("%f",&H);
	volume=PI*R*R*H;
	printf("Volume of cylinder=\t%f",volume);
}
