#include <stdio.h>
#include <stdlib.h>

#include "IntQueue.h"

int Initialize(IntQueue* qu, int max) {
	qu->num = qu->front = qu->rear = 0;
	if ((qu->que = calloc(max, sizeof(int))) == NULL) { // 괄호 추가!
		qu->max = 0;
		return -1;
	}
	qu->max = max;
	return 0;
}

int Enque(IntQueue* qu, int x) //인큐는 큐에 데이터를 넣는 작업
{
	if (qu->num >= qu->max)
	{
		return -1;
	}
	else
	{
		qu->num++;
		qu->que[qu->rear] = x;// 큐를 마지막에 저장
		qu->rear++; // rear  1 증가

		if (qu->rear == qu->max)
		{
			qu->rear = 0;
		}
		
		return 0;
	}

}
int Deque(IntQueue* qu, int* x) {
	if (qu->num <= 0) return -1;
	qu->num--;
	*x = qu->que[qu->front++];
	if (qu->front == qu->max) qu->front = 0;
	return 0; // 성공 시 리턴값 추가!
}

int Peek(const IntQueue* qu, int* x)
{
	if (qu->num <= 0)
	{
		return -1;
	}
	
	*x = qu->que[qu->front];
	return 0;
}
void Clear(IntQueue* qu)
{
	qu->front = qu->rear = 0;
}

int Capacity(const IntQueue* qu) {

	return qu->max;
}

int size(const IntQueue* qu)
{
	return qu->num;
}


int IsEmpty(const IntQueue* qu)
{
	return qu->num <= 0;
}

int IsFull(const IntQueue* qu)
{
	return qu->num >= qu->max;
}

int Search(const IntQueue* qu, int x)
{
	for (int i = 0; i < qu->num; i++)
	{
		int idx;
		if (qu->que[idx = (qu->front + i) % qu->max] == x)
		{
			return idx;
		}
	}
	return -1;
}


void Print(const IntQueue* qu) { // main이 대문자니 여기도 대문자 P
	for (int i = 0; i < qu->num; i++) {
		// +1 대신 +i 를 써야 순서대로 나옵니다.
		printf("%d ", qu->que[(qu->front + i) % qu->max]);
	}
	printf("\n"); // 오타 수정
}

void Terminate(IntQueue* qu)
{
	if (qu->que!= NULL)
	{
		free(qu->que);
	}
	qu->max = qu->num = qu->front = qu->rear = 0;
}

