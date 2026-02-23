#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
// 매개변수가 const int[]인 이유 > 함수 내에서 원본 배열을 변경 하면 안되기 때문에 
int search(const int[], int,int);
int main(void)
{
	int nx, ky;
	puts("선형 검색!");
	printf("요소 개수 >"); scanf("%d", &nx);

	int* x = calloc(nx, sizeof(int));

	for (int i = 0; i < nx; i++)
	{
		printf("x[%d] > ", i); scanf("%d", &x[i]);
	}
	printf("검색값 > "); scanf("%d", &ky);
	int idx = search(x, nx, ky); // 배열 x에 값이 ky인 요소를 선형 겁색
	if (idx == -1)
	{
		puts("찾는값이 없습니다. ");
		//return 1;
	}
	else
	{
		printf("%d는 x[%d]에 있습니다.", ky, idx);
	}

	free(x);
	return 0;
}

int search(const int a[], int n, int key)
{
	int i = 0;
	/*
	while (1)
	{
		if (i == n)
		{
			return -1; // 검색 실패
		}
		if (a[i] == key)
			return i;
		i++;
	}
	*/
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			return 1; // 검색 성ㄱ

		}
	}
	return -1; // 검색 실패
}