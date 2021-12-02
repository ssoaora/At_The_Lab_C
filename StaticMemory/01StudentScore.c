#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score[1000];		// 정적 메모리
	int n;

	printf("성적을 입력할 학생의 수 : ");
	scanf("%d", &n);
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		printf("%d번 학생의 성적 : ", i+1);
		scanf("%d", &score[i]);
		total += score[i];
	}
	printf("총점: %d, 평균: %f\n", total, (double)total / n);

	return 0;
}