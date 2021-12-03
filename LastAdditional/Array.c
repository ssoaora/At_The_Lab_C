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
	// Visual Studio 에서는 int 크기를 32, 64비트 모두 동일하게 4바이트로 정했다.
	// 모든 플랫폼에서 long은 4바이트 long long은 8바이트로 정의되어있다.
	// 포인터의 크기는 플랫폼에 상관 없이 모두 동일하다.

	return 0;
}

// 구성에서 Debug 는 모든 인수가 포함. 즉 파일 크기가 크다.
// 사람들에게 배포할때는 Release를 사용하여 파일 크기를 줄인다.
// Realease x64 는 배포용 64비트 응용 프로그램이다.