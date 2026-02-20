#include <stdio.h>


int main(void)
{
	int a = 10;
	int* pa = &a;
	printf("%d\n", a);
	printf("%u\n", pa);
	printf("%d\n", *pa);
	//pa는 주소 저장, 변수 a의 주소를 담을수도 있고 다른 정수형 변수의 주소도 담을수 있다.
	//*pa는 그 주소에 있는 실제 값 => a변수의 값
}
