#ifndef ___IntQueue
#define ___IntQueue

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int* que;
}IntQueue;

int Initialize(IntQueue* q, int max); //큐 초기회
int Enque(IntQueue* q, int x); // 큐에 데이터르 인큐
int Deque(IntQueue* q, int* x); // 큐에 데이터를 디큐
int Peek(const IntQueue* q, int* x); //큐에서 데이터를 피크
void Clear(IntQueue* q); // 모든 데이터 삭제 
int Capacity(const IntQueue* q); // 큐의 최대 용량

int Size(const IntQueue* q); //큐에 저장된 데이터 개수

int IsEmpty(const IntQueue* q);
int IsFull(const IntQueue* q);
int search(const IntQueue* q, int x);
void Print(const IntQueue* q);

void Terminate(IntQueue* q);


#endif