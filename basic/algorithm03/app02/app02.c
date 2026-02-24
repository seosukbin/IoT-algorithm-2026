//app 02-팩토리얼 재귀 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long long factorial(int n);

int main(void)
{
	int x;
	unsigned long long result = 0;
	printf("점수 입력 > "); scanf("%d", &x);
	result = factorial(x);
	printf("%d! = %d\n", x, factorial(x));
	return 0;
}

unsigned long long factorial(int n)
{
	if (n > 0)
	{
		return (unsigned long long)n *factorial(n-1);
	}
	else
		return 1;
}