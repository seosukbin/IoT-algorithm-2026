// app03.cpp - 팩토리얼 비재귀적 구현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial_iter(int n);

int main(void)
{
	int x;
	int result = 0;
	while (1)
	{

		printf("점수 입력 > "); scanf("%d", &x);
		if (x <= 0)
			break;
		result = factorial_iter(x);
		printf("%d! = %d\n", x, factorial_iter(x));

	}
	return 0;
}

int factorial_iter(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}