#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(IntStack* st, int max) // 스택 초기화
{
	st->ptr = 0;
	if ((st ->stk = calloc(max, sizeof(int))) == NULL)
	{
		st->max = 0;
		return -1;
	}
	st->max = max;

	return 0;
}

int Push(IntStack* st, int x)
{
	if (st->ptr >= st->max)
	{
		return -1;
	}
	st->stk[st->ptr] = x;
	st->ptr++;
	return 0;
}
int Pop(IntStack* st, int* x)
{
	if (st->ptr <= 0)
	{
		return -1;
	}
	st->ptr--;
	*x = st->stk[st->ptr];
	return 0;
}
int Peek(const IntStack* st, int* x)
{
	if (st->ptr <= 0)
	{
		return -1;
	}
	*x = st->stk[st->ptr - 1];
	return 0;
}

void Clear(IntStack *st)
{
	st->ptr = 0;
}

int Capacity(const IntStack* st)
{
	return st->max;
}

int Size(const IntStack* st)
{
	return st->ptr;
}
int IsEmpty(const IntStack* st)
{
	return st->ptr <= 0;
}

int IsFull(const IntStack* st, int x)
{
	for (int i = st->ptr - 1; i >= 0; i--)
	{
		if (st->stk[i] == x)
		{
			return i;
		}
	}
	return -1;
}
int Print(const IntStack* st)
{
	for (int i = 0; i < st->ptr; i++)
	{
		printf("%d > ", st->stk[i]);

	}
	printf("\n");
}

void Terminate(IntStack* st)
{
	if (st->stk != NULL)
	{
		free(st->stk);

	}
	st->max = st->ptr = 0;
}
