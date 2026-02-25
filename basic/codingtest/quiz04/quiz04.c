//4. 학생의 이름과 점수가 N명 주어집니다.최고 점수 학생의 이름과 점수를 출력하는 소스를 작성하세요.최고 점수가 동점일 경우 먼저 
//나온 점수가 결정됩니다.
//예) 입력 4
//김 70
//이 88
//박 88
//최 60
//출력 이 88
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max =0;
char* max_name;
int main(void)
{
	int i,j;

	int gd[20];
	char* arr[] = { "가","나","다","라","다","미","바","사"};
	printf("학생수를 입력 하세요: ");
	scanf("%d", &i);
	
	for (j = 0; j < i; j++)
	{
	
		printf("%s의 점수: ", *(arr + j));
		scanf("%d", &gd[j]);
		
		if (j == 0)
		{

			max = gd[0];
			max_name = *(arr + 0);
		}

		if (max < gd[j])
		{
			max = gd[j];
			max_name = *(arr + j);

		}	
	}

	for (j = 0; j < i; j++)
	{

		printf("%s의 점수는 %d입니다.\n ", *(arr + j), gd[j]);
	}
	printf("가장 높은점수인 %d를 받은 사람은 %s입니다.", max, max_name);
}

