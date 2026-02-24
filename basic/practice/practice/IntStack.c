#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(IntStack* s, int max)
{
	s->ptr = 0;// 여기서 ptr은 스택에 쌓여져 있는 데이터의 개수
	if ((s->stk = calloc(max, sizeof(int))) == NULL) // NULL을 반환 한다는것은 메모리 생성에 실패 했다는 의미이다. max값이 0일경우 null이 반환 되지 않는다.
		{
			s->max = 0;
			return -1;

		}

	s->max = max;
	return 0;
			
}

int Push(IntStack* s, int x)
{
	if (s->ptr >= s->max) //ptr은 스택에 쌓여 있는 데이터의 개수
	{
		return -1;
	}

	s->stk[s->ptr++] = x;
	return 0;
}

int Pop(IntStack* s, int* x)
{
	if (s->ptr <= 0)
	{
		return -1;
	}
	*x = s->stk[--s->ptr]; // 전위 연산자
	return 0;
}

int Peek(const IntStack* s, int* x)
{
	if (s->ptr <= 0)
	{
		return -1;
	}

	*x = s->stk[s->ptr - 1]; // 현재 제일 위에 있는 값을 확인해야 하기에 
							 // ptr -1을 해주고 peek 값 확인한다.

	return 0;
}

void Clear(IntStack* s)
{
	s->ptr = 0; // ptr 배열을 모두다 초기화
}

int Capacity(const IntStack* s)
{
	return s->max; // max는 최대 용량이다.
}

int Size(const IntStack* s) // 스택에 쌓여져 있는 데이터의 개수
{
	return s->ptr;
}

int IsEmpty(const IntStack* s)
{
	return s->ptr <= 0;
}
int IsFull(const IntStack* s)
{
	return s->ptr >=s-> max;
}

int Search(const IntStack* s, int x)
{
	for (int i = s->ptr - 1; i >= 0; i--)
	{
		if (s->stk[i] == x)
			return i;
		return -1;
	}
}

void Print(const IntStack* s)
{
	int i;
	for (int i = 0; i < s->ptr; i++)
	{
		printf("%d", s->stk[i]);
		putchar('\n');
	}
}
void Terminate(IntStack* s)
{
	if (s->stk != NULL)
	{
		free(s->stk);
		s->max = s->ptr = 0;
	}
}