#include <stdio.h>

void swap1(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap2(int** a, int** b)
{
	int* temp = *a;
	*a = *b;
	*b = temp;
}
int main (void)
{
	int x = 25, y = 52;
	printf("변경전 x=%d, b= %d\n", x, y);
	swap(&x, &y);
	printf("변경후 x = %d, y= %d", x, y);

	int* px = &x;
	int* py = &y;

	printf("변경전 x=%d, b= %d\n", *px, *py);
	swap2(&px, &py);
	printf("변경후 x = %d, y= %d", *px, *py);

	return 0;
}