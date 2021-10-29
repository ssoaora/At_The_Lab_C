#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double InputRadius()
{
	double radius;

	printf("¹ÝÁö¸§ : ");
	scanf("%lf", &radius);

	return radius;
}

double GetArea(double radius)
{
	return PI * radius * radius;
}
