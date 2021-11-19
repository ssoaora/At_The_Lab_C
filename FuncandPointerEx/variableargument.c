#include <stdio.h>
#include <stdarg.h>


int sum(int num, ...)
{
	int total = 0;
	va_list list;
	
	va_start(list, num);
	for (int i = 0; i < num; i++)
	{
		total += va_arg(list, int);
	}
	va_end(list);

	return total;
}

int main(void)
{
	printf("%d\n", sum(2, 10, 20));
	printf("%d\n", sum(3, 10, 20, 30));
	printf("%d\n", sum(4, 10, 20, 30, 40));
	printf("%d\n", sum(5, 10, 20, 30, 40, 50));

	return 0;
}
