// 큐 구현

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include "IntQueue.h"
int main(void)
{
	IntQueue que;
	if (Initialize(&que, 8) == -1)
	{
		puts("큐 생성 실패!");
		return 1;
	}

	while (1)
	{
		int menu, x;
		printf("현재 데이터 수: %d / %d\n", size(&que), Capacity(&que));
		printf("(1)인큐, (2)디큐, (3)피크, (4)출력, (5)종료 > "); scanf("%d", &menu);
		if (menu == 0) break;
		switch (menu)
		{
		case 1:
			printf("데이터 입력 > "); scanf("%d", &x);
			if (Enque(&que, x) == -1)
			{
				printf("\a오류: 인큐 실패!");
			}
			break;

		case 2:
			if (Deque(&que, &x) == -1)
			{
				puts("\a오류: 디큐 실패!");
			}
			else
			{
				printf("디큐 데이터: %d\n", x);
			}
			break;

		case 3:
			if (Peek(&que, &x) == -1)
			{
				puts("\a오류: 피크 실패!");
			}
			else
			{
				printf("피크 데이터: %d\n", x);
			}
			break;

		case 4:
			Print(&que);
			break;

		default:
			puts("입력 오류!");
			break;
		}

	}

	Terminate(&que); // 종료
	return 0;
}