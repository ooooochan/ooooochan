#include <stdio.h>
void swap(int *pa, int *pb);
int main(void)
{
	int a = 10;
	int b = 20;

	printf("%d", a);
	printf("%d\n", b);
	swap(&a, &b);

	printf("%d", a);
	printf("%d\n", b);
}
void swap(int *pa, int *pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}