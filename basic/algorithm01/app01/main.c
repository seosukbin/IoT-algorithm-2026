#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

int main(void)
{
	int a, b, c;

	int max = 0;
	printf("세 정수중 최대값 리턴,\n");
	printf("a > "); scanf("%d", &a);
	printf("b > "); scanf("%d", &b);
	printf("c > "); scanf("%d", &c);
	
	max = a;
	if (b > max)
		max = b;

	if (c > max)
		max = c;
	printf("최댓값은 %d입니다.", max);
	return 0;
}

