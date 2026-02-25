#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*--- 교환 함수 (사용하기 전에 정의되어야 함) ----*/
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*------버블 정렬------*/
void bubble_sort(int a[], int n)
{
    int exchange
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                swap(&a[j - 1], &a[j]);
               int exchange ++;
            }
        }
        if(exhange ==0)
    }
}

int main(void)
{
    int nx;
    puts("버블 정렬");
    printf("요소 개수 > ");
    scanf("%d", &nx); // &d -> %d로 수정

    if (nx <= 0) return 0; // 예외 처리

    int* x = (int*)calloc(nx, sizeof(int));

    for (int i = 0; i < nx; i++)
    {
        printf("x[%d] > ", i); // i 추가
        scanf("%d", &x[i]);
    }

    bubble_sort(x, nx);

    puts("오름차순 정렬 완료!");
    for (int i = 0; i < nx; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);
    return 0;
}