//3. 정수 N이 주어집니다.재귀함수로 1 + 2 + .... + N 값을 출력하는 소스를 작성하세요.
//예) 입력 5->출력 15
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recur(int x);
int total = 0;
int main(void)
{
	int a;
	printf("입력: ");
	scanf("%d", &a);
	recur(a);
	printf("출력: %d", total);return 0;
}
void recur(int a)
{
	
	if (a > 0)
	{
		
		recur(a - 1);
		printf("%d\n", a);
		total += a;
		recur(a - 2);
		
		
	}

}