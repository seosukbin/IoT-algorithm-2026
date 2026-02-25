#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// codingtest

//1. 공백 없는 문자열 s가 있습니다.스택을 사용하여 문자열을 뒤집어 출력하는 소스를 작성하세요.
// 힌트) 한 글자씩 스택에...
//예) hello->olleh



int main(void)
{

	char arr[30];


	printf("문자열을 입력 하세요: ");
	scanf("%s", arr);
	int len = strlen(arr);


	for (len; len >= 0; len--)
	{
		printf("%c", *(arr + len ));
	}
	return 0;
}











