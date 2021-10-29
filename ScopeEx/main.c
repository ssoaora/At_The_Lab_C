#include <stdio.h>

double InputRadius();
double GetArea(double radius);

int main(void)
{
	double radius = InputRadius();
	double area = GetArea(radius);

	printf("원의 면적 = %.2lf\n", area);

	return 0;
}
