// 학생의 성적처리
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100


typedef struct subject  // subject 생략 가능
{
	int math;
	int eng;
} SUBJECT;

typedef struct person
{
	int num;		// 학번
	char name[20];	// 이름
	SUBJECT score;	// 점수
	int total;		// 총점
	double mean;	// 평균
	int rank;		// 석차
} STUDENT;


void ComputeRank(STUDENT data[], int num);

void main()
{
	STUDENT data[MAX];
	int num, i = 0;

	while (1)
	{
		printf("학생의 학번, 이름, 수학 점수, 영어 점수를 입력하세요.\n");
		printf("학번(종료 = -1 입력) : ");
		scanf("%d", &data[i].num);

		if (data[i].num == -1)
			break;

		printf("이름 : ");
		scanf("%s", data[i].name);
		// gets(data[i].name);		// 공백 문자 입력 받기. 하지만 버퍼를 플러싱 해주어야 입력 받을 수 있다.

		printf("수학 점수 : ");
		scanf("%d", &data[i].score.math);

		printf("영어 점수 : ");
		scanf("%d", &data[i].score.eng);
		puts("");

		i++;
	}
	num = i;


	for (int i = 0; i < num; i++)
	{
		data[i].total = data[i].score.math + data[i].score.eng;
		data[i].mean = (double)data[i].total / 2.0;
	}

	ComputeRank(data, num);		// 내림차순 정리 알고리즘

	printf("학번 이름       수학 영어 총점 평균   석차\n");
	printf("===========================================\n");

	for (int n = 0; n < num; n++)
	{
		printf("%04d %-10s %4d %4d %4d %6.2f %3d\n",
			data[n].num, data[n].name, data[n].score.math, data[n].score.eng,
			data[n].total, data[n].mean, data[n].rank);
	}
}

// 내림차순으로 정리해주는 BubbleSort 알고리즘
void ComputeRank(STUDENT data[], int num)
{
	STUDENT temp;

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < (num - i) - 1; j++)
		{
			if (data[j].total < data[j + 1].total)
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++)
		data[i].rank = i + 1;
}
