#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rnum, cnum;
	printf("행의 개수 : ");
	scanf("%d", &rnum);
	printf("열의 개수 : ");
	scanf("%d", &cnum);

	// 2차원 배열과 똑같은 크기를 할당 받는 동적 메모리 할당
	double** arr = (double**)malloc(sizeof(double*) * rnum);
	for (int i = 0; i < rnum; i++)
	{
		arr[i] = (double*)malloc(sizeof(double) * cnum);
	}

	for (int r = 0; r < rnum; r++)
	{
		for (int c = 0; c < cnum; c++)
		{
			arr[r][c] = 10.0;
			printf("%5.1f", arr[r][c]);
		}
		printf("\n");
	}

	for (int i = 0; i < rnum; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}
