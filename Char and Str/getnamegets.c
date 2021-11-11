#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];

	printf("이름: ");
	// scanf("%s", name);
	// name 은 그자체가 주소이기 때문에 &를 붙여줄 필요가 없다.
	// 입력 중 공백이 들어온다면 입력이 끝난걸로 간주한다.
	gets(name);  // 공백이 있는 문자를 입력받는다면 gets() 를 써야한다.

	printf("입력된 이름 : %s\n", name);

	return 0;
}