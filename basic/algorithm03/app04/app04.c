// app04 - 재귀 알고리즘 분석

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0; // 호출 횟수를 셀 변수

void recur(int n)
{
    count++; // 함수가 실행될 때마다 무조건 1씩 증가

    if (n > 0)
    {
        recur(n - 1);
        printf("%d\n", n); // 원래 코드의 오타(print -> printf) 수정
        recur(n - 2);
    }
}

int main(void)
{
    int x;
    while (1)
    {
        printf("정수를 입력 하세요: ");
        if (scanf("%d", &x) != 1) break; // 입력 오류 방지

        if (x <= 0) break;

        count = 0; // 횟수 초기화
        recur(x);

        printf("--- 순수 재귀 총 호출 횟수: %d ---\n", count);
    }
    return 0;
}