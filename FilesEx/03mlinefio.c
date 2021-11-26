#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* fname = "c:\\temp\\grade.txt";
	char str[80];
	int cnt = 0;
	FILE* fp = NULL;

	if ((fp = fopen(fname, "w")) == NULL)
	{
		printf("파일이 열리지 않습니다.");
		exit(1);
	}

	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	fgets(str, 80, stdin);		// stdin 은 표준 입력 스트림(=키보드)

	while (!feof(stdin))		// 파일의 끝이 아닌 동안 = ctrl+z를 누르기 전까지
	{
		fprintf(fp, "%d %s", ++cnt, str);		// Enter 키를 칠 때까지 포함된다.
		// fputs(str, fp);
		fgets(str, 80, stdin);		// stdin 은 표준 입력 스트림(=키보드)
	}

	fclose(fp);

	return 0;
}
