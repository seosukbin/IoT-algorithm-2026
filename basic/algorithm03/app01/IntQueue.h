//IntQueue 헤더 파일
#ifndef ___IntQueue   
#define ___IntQueue   


typedef struct { //tyepdef를 사용하면 나중에 구조체 선언 할때 IntStack s1;  // struct 안 붙여도 됨

	int max; // 큐 최대 크기
	int num; // 큐 현재 요소 개수
	int front; // 큐 프런트 링버퍼에서 맨 처음 요소의 인덱스
	int rear; // 큐 리어 맨끝 요소의 하나 뒤인 인덱스
	int* que; // 실제 큐 데이터의 맨 앞요소의 포인터

} IntQueue;
              // 파라미터 IntQueue&(주소), max: 최대 크기 
int Initialize(IntQueue* qu, int max); // 리턴 -1은 오류 0은 성공

int Enque(IntQueue* qu, int x); //인큐는 큐에 데이터를 넣는 작업

int Deque(IntQueue* qu, int* x); // 데이터를 꺼내는 작업

int Peek(const IntQueue* qu, int* x);

void Clear(IntQueue* qu);

int Capacity(const IntQueue* qu);

int size(const IntQueue* qu);

int IsEmpty(const IntQueue* qu);

int IsFull(const IntQueue* qu);

int Search(const IntQueue* qu,int x);

void print(const IntQueue* qu);

void Terminate(IntQueue* qu);
#endif