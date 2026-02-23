#ifndef ___INTSTACK_H
#define ___INTSTACK_H

typedef struct
{
	int max;
	int ptr;
	int* stk;
}IntStack;

int Initialize(IntStack* s, int max); // 스택 초기화
int Push(IntStack* st, int* x); //스택에 데이터 push
int Pop(IntStack* st, int* x); //스택에서 데이터 pop
int Peek(const IntStack* st, int* x); // 스택에서 마지막 데이터 피크
void Clear(IntStack* st); //스택 비우기
int Capacity(const IntStack* st); //스택 최대 용량
int Size(const IntStack* st); // 스택 데이터 개수
int IsEmpty(const IntStack* st); //스택 빈 여부 확인
int IsFull(const IntStack* st); // 스택 만실 여부 확인
int Search(const IntStack* st, int x); // 스택 검색
int Print(const IntStack* st); //스택 모든 데이터 출력
void Terminate(IntStack* st); // 스택 종료

#endif