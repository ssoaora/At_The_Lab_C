#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fpi, * fpo;
	char* infile = "c:\\temp\\input.txt";
	char* outfile = "c:\\temp\\output.txt";


	if ((fpi = fopen(infile, "r")) == NULL)
	{
		printf("입력 파일을 열 수 없습니다.\n");
		exit(1);
	}

	if ((fpo = fopen(outfile, "w")) == NULL)
	{
		printf("출력 파일을 열 수 없습니다.\n");
		exit(1);
	}

	int kor, math, eng;
	fscanf(fpi, "%d %d %d", &kor, &math, &eng);

	int sum = kor + math + eng;
	double mean = sum / 3.0;
	fprintf(fpo, "학생 성적의 합 : %d\n", sum);
	fprintf(fpo, "학생 성적의 평균 : %.3f\n", mean);

	fclose(fpi);
	fclose(fpo);

	return 0;
}
