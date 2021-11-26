/*
������ ����� ���
1�� ù����, ��� ĭ�� �д�.
���� ���ڴ� �� �� ��, �� ĭ ������ �д�.
-���� �ٱ��� ���, ����� ������ �����Ѵ�.
- ����, ä����� �ϴ� ��ġ�� �̹� ���� �����ϸ� �� �� �Ʒ�, ���� ĭ�� �д�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int square[MAX][MAX] = { 0 };

void GetNextLocation(int *ROW, int *COL, int N)
{
	int r = *ROW;
	int c = *COL;

	r--; c--;
	if (r < 0)
		r = N - 1;
	if (c < 0)
		c = N - 1;

	if (square[r][c] != 0)
	{
		r = *ROW + 1;
		if (r >= N)
			r = 0;
		c = *COL;
	}

	*ROW = r;
	*COL = c;
}

int main(void)
{
	int N, ROW, COL;
	printf("Magic Square�� �� �� ũ��(N:Ȧ��) : ");
	scanf("%d", &N);

	if (N % 2 == 0)
	{
		printf("Ȧ���� �Է��ϼ���!\n");
		return 1;
	}

	ROW = 0;
	COL = N / 2;

	square[ROW][COL] = 1;		// 1�� ������� 1
	for (int i = 2; i < i <= N * N; i++)
	{
		GetNextLocation(&ROW, &COL, N);		// Call by reference
		square[ROW][COL] = i;
	}

	printf("Magic Square :\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%5d", square[i][j]);
		}
		printf("\n");
	}

	return 0;
}
