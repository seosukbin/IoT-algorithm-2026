
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include "IntStack.h"
int main(void)
{
	IntStack st;
	if (Initialize(&st, 5)==-1)
	{
		puts("스택 초기화 실패!");
		return 1;
	}
	while (1)
	{
		int menu, x;
		printf("현재 데이터 수: %d / %d\n", Size(&st), Capacity(&st));
		printf("(1)푸시,(2)팝,(3)피크,(4)출력,(5)검색, (6)클리어, (0)출력 > "); scanf("%d", &menu);
		if (menu == 0) break;
		switch (menu)
		{
		case 1: //push
			printf("데이터 입력 > "); scanf("%d", &x);
			
			if (Push(&st, x) == -1)
			{
				puts("\a오류: 푸시 실패! ");
			}
			break;

		case 2: //pop
			if (!IsEmpty(&st))
			{
				if (Pop(&st, &x) == -1)
				{
					puts("\a 오류: 팝 실패!");
				}
				else
				{
					printf("팝 데이터는 %d\n", x);
				}
			}

			else("스택이 비워져 있습니다.");
			break;
		
		case 3:
			if (Peek(&st, &x) == -1)
				puts("\a오류: 피크 실패!");
			else
				printf("피크 데이터는 %d\n", x);
			break;

		case 4:
			Print(&st);
			break;
		case 5:
			printf("검색 할 수 입력 > "); scanf("%d", &x);
			int res = Search(&st, x);
			if (res == -1)
			{
				puts("입력 실패!");
			}
			else
			{
				printf("검색 결과: st[%d] => %d\n", res, st.stk[res]);
			}

		case 6:
			Clear(&st);
			puts("스택 클리어!");
			break;
		}
		

	}
	Terminate(&st);


}