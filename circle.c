#include<stdio.h>
#define pi 3.14
int main()
{
	float radius,circum,area;
	printf("enter radius");
	scanf("%f",&radius);
	circum=2*pi*radius;
	area=pi*radius*radius;
	printf("%0.4f......%0.4f",circum,area);
