#include <stdio.h>

int main()
{
	int a = 3;
	int* p = &a;
	char* pc = (char*)p;

	for (int i = 0; i < 4; i++)
	{
		printf("%p : %02x\n", pc, *pc);  // 32비트 개발도구라 4바이트까지만 출력된다.
		pc++;
	}

	return 0;
}
