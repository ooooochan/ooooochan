#include <stdio.h>

int fac(int a) {
	if (a == 0) {
		return 1;
	}
	return a * fac(a - 1);
}
int main(void)
{
	int input;
	printf("계산할 팩토리얼 값 입력");
	scanf_s("%d", &input);
	printf("%d", fac(input));
}