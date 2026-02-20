#include <stdio.h>

void change(int*);

int main(void)
{
	int num = 10;
	change(&num);
	printf("변경된 num: %d\n", num);
	return 0;
}

void change(int* p)
{
	*p = 300; // 주소가 가리킨 값이 변하게 되기 때문에 포인터를 꼭 사용 해야 한다.

}