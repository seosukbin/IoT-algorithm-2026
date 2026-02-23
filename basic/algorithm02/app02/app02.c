#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>

int bin_search(const int[], int, int);

int main(void)
{
	int nx, ky;
	puts("이진검색");
	printf("요소 개수 > "); scanf("%d", &nx);

	int* x = calloc(nx, sizeof(int));
	printf("오름차순 입력 할것. \n");
	printf("x[0] > "); scanf("%d", &x[0]);

	for (int i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] > ",i); scanf("%d", &x[i]);
			
		
		} while (x[i] < x[i - 1]);
	} // 배열 앞의 값이 뒤의 값보다 작으면 안되기 떄문에
	  // 제대로 된 입력이 될때 까지 반복 
	printf("검색값  > "); scanf("%d", &ky);

	int idx = bin_search(x, nx, ky);
	if (idx == -1)
	{
		puts("찾는 값이 없습니다. ");
	}
	else
	{
		printf(" %d는 x[%d]에 있습니다. \n", ky, idx);
	}

	free(x);

	return 0;
}

// n개 요소 배열에서 key와 일치하는 요소 이진 검색 함수
int bin_search(const int a[], int n, int key)
{
	int pl = 0; // 검색 범위 맨 앞 인덱스
	int pr = n - 1; // 검색 범위 맨 뒤 인덱스
	
	do
	{
		int pc = (pl + pr) / 2;
		if (a[pc] == key)
		{
			return pc;
		}
		else if (a[pc] < key) // 찾는값은 중앙값 오른쪽에 있다.
		{
			pl = pc + 1;

		}
	} while (pl <= pr); //이진 검색에서 무조건 pl은 pr보다 왼쪽에 존재 해야 한다. 

	return -1;
}