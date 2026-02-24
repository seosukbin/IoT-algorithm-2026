// app06. goto문 사용 예제
#include <stdio.h>
#include "IntStack.h"

void recur(int n)
{
	IntStack stk;
	Initialize(&stk, 100);
Top:
	if (n > 0)
	{
		Push(&stk, n);
		n = n - 1;
		goto Top;

		printf("%d\n", n);
	}

	if (!IsEmpty(&stk))
	{
		Pop(&stk, &n);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
}
int main(void)
{
	int i = 0;
start: //돛 
	printf("i= %d\n", i);
	i++;
	if (i < 5) goto start;
	printf("끝!");

	return 0;
}
