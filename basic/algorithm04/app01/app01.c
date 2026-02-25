#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

static char memo[128][1024];
int count = 0; // 함수 호출 횟수를 저장할 변수

void recur(int n)
{
    count++; // 함수가 호출될 때마다 1씩 증가

    if (memo[n + 1][0] != '\0')
    {
        printf("%s", memo[n + 1]);
    }
    else
    {
        if (n > 0)
        {
            recur(n - 1);
            printf("%d\n", n);
            recur(n - 2);
            // sprintf의 형식 문자열에 \n을 넣어줘야 메모에서 출력할 때 줄바꿈이 유지됩니다.
            sprintf(memo[n + 1], "%s%d\n%s", memo[n], n, memo[n - 1]);
        }
        else
        {
            strcpy(memo[n + 1], "");
        }
    }
}

int main(void)
{
    int x;
    while (1)
    {
        printf("정수를 입력 하세요: ");
        scanf("%d", &x);

        if (x <= 0) break;

        count = 0; // 호출 횟수 초기화
        recur(x);

        printf("--- 총 호출 횟수: %d ---\n", count);
    }
    return 0;
}