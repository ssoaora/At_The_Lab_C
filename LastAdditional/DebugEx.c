/*
F5 시작
F9 중단점
F10 라인 단위 실행
F11 프로시져 단위 실행
Ctrl + F10 현재 위치까지 실행
Shift + F5 종료
*/
#include <stdio.h>
// #define MULTILINE


void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
#ifndef MULTILINE
		printf("%d ", a[i]);
#else
		printf("%d\n", a[i]);
#endif // !MULTILINE
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	printArray(arr, 5);
	printf("\n%d", sizeof(int));

	return 0;
}
