#include <stdio.h>

int main(void)
{
	int ary[] = { 10,30,50,70,90 };
	int* pa = ary; //배열 변수의 요소[]를 빼면 배열 변수의 시작 주소를 뜻한다.

	int count = sizeof(ary) / sizeof(ary[0]);
	for (int i = 0; i < count; i++)
	{
		printf("ary[%d] = %d\n", *(pa + i));
	}

 }
// 배열 이름 = 첫번쨰 요소 주소
//pa +1은 1바이트가 아니라 자료형 크기 만큼 1이동