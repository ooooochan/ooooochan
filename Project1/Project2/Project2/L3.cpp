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
	printf("����� ���丮�� �� �Է�");
	scanf_s("%d", &input);
	printf("%d", fac(input));
}