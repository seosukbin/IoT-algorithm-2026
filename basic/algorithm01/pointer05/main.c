#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
} Person;

int main(void)
{
	Person p1 = { .name = "Hugo",.age = 50 };

	Person* ptr = &p1;
	printf("이름: %s\n", ptr->name); //*(ptr).name과 같다.
	printf("나이: %d\n", ptr->age);
	return 0;
}