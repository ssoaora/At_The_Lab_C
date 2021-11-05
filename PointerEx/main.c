// 시험 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y)  // call-by-address 방식
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int x = 500, y = 700;
	printf("x=%d, y=%d\n", x, y);

	swap(&x, &y);
	printf("x=%d, y=%d\n", x, y);

	return 0;
}
