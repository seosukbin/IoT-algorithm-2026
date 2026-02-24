#include <stdio.h>
#include "IntStack.h"

int main(void)
{
	IntStack s; // 구조체 선언
	if (Initialize(&s, 5) == -1)
	{
		puts("스택 생성에 문제가 발생 하였습니다. ");
		return 1;
	}
	while (1)
	{
		int menu, x;
		printf("현재 데이터수 %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)푸시, (2)팝, (3)피크, (4)출력, (0)종료: ");
		scanf("%d", &menu);
	}
}