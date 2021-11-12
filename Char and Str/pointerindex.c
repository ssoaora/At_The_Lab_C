#include <stdio.h>

// 보안문제로 전역변수 앞에 const 붙임
const char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
const char **cp[] = { c + 3, c + 2, c + 1, c };
const char*** cpp = cp;

void main()
{
	printf("%s\n", **++cpp);			// *(*(++cpp)) = POINT
	printf("%s\n", *-- * ++cpp + 3);	// (*(--(*(++cpp))))+3 = ER
	printf("%s\n", *cpp[-2] + 3);		// (*(cpp[-2]))+3 = ST
	printf("%s\n", cpp[-1][-1] + 1);	// ((cpp[-1])[-1])+1 = EW
}
