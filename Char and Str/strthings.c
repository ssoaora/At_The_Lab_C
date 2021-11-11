/*
문자열의 길이계산
int strlen(char* s);

문자열의 특정위치 계산
char* strchr(char *s, char c);

문자열 복사
void strcpy(char *s1, char *s2);
s1의 문자열을 싹 지우고 s2의 문자열로 복붙

문자열 결합
char* strcat(char *s1, char *s2);

문자열 비교
int strcmp(char *s1, char *s2);
첫 문자와 첫 문자를 비교한다.
s1 < s2 : 음수
s1 == s2 : 0
s1 > s2 : 양수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void strthings_2(char, char);
void strthings_5(char, char);

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "Java";

	strthings_2(str1, str2);
	strthings_5(str1, str2);

	return 0;
}

void strthings_2(char str1[], char str2[])
{
	strcpy(str1, str2);
	// char str1[]; char str2[]; 에서 strcpy(str2, str1) 이라면 자릿수가 부족하기 때문에 오류발생. 따라서 자릿수를 처음에 길게 설정
	printf("%s : %s\n", str1, str2);
}

void strthings_5(char str1[], char str2[])
{
	printf("%d", strcmp(str1, str2));
}