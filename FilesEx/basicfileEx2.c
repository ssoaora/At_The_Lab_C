#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = NULL;

	if ((fp = fopen("C:\\temp\\basic.txt", "w")) == NULL)		// 존재하지 않으면 새롭게 생성, 존재한다면 모두 지우고 새로 생성
	{
		printf("파일을 열 수 없습니다.\n");
		exit(1);
	}

	double radius;
	printf("원의 반지름 : ");
	scanf("%lf", &radius);

	double area = 3.141592 * radius * radius;
	fprintf(fp, "원의 면적은 %f입니다.\n", area);

	fclose(fp);

	return 0;
}
