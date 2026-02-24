
#ifndef ___IntStack
#define ___IntStack

typedef struct {

	int max; // 스택의 최대 용량을 나타내는 멤버
	int ptr; // 데이터를 저장할 용도의 배열을 가리키는 포인터
	int* stk; // 스택에 쌓여 있는 개수를 나타내는 멤버

} IntStack;

int Initialize(IntStack* s, int max); // 스택 초기화

int Push(IntStack* s, int x);

int Pop(IntStack* s, int* x);

int Peek(const IntStack* s, int* x);

void Clear(IntStack* s);

int Capacity(const IntStack* s);

int Size(const IntStack* s); // 스택의 데이터 개수

int IsEmpty(const IntStack* s);
int IsFull(const IntStack* s);
int Search(const IntStack* s, int x);
void Print(const IntStack* s);
void Terminate(IntStack* s);

#endif