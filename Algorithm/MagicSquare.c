/*
마방진 만드는 방법
1은 첫번줄, 가운데 칸에 둔다.
다음 숫자는 한 줄 위, 한 칸 좌측에 둔다.
- 영역 바깥인 경우, 연결된 것으로 생각한다.
- 만일, 채우고자 하는 위치에 이미 값이 존재하면 한 줄 아래, 같은 칸에 둔다.
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
	printf("Magic Square의 한 쪽 크기(N:홀수) : ");
	scanf("%d", &N);

	if (N % 2 == 0)
	{
		printf("홀수를 입력하세요!\n");
		return 1;
	}

	ROW = 0;
	COL = N / 2;

	square[ROW][COL] = 1;		// 1행 정가운데에 1
	for (int i = 2; i <= N * N; i++)
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
