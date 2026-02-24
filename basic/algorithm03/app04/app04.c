// app04 - 재귀 알고리즘 분석

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	while (1)
	{
		printf("정수를 입력 하세요: "); scanf("%d", &x);
		if (x <= 0) break;
		recur(x);
	}
	 
	return 0;
}

void recur(int n)
{
	if (n > 0)
	{
		recur(n - 1);
		print("%d\n", n);
		recur(n - 2);

	}
}