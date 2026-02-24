// app05.재귀 알고리즘 비재귀로 변경
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recur(int n)
{
Top:
	if (n > 0)
	{
		recur(n - 1);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
}



int main(void)
{
	int x;
	

	printf("정수를 입력 하세요: ");
	scanf("%d", &x);
		
	recur(x);


	return 0;
}

