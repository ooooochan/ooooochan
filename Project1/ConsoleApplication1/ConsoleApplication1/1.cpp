#include <stdio.h>

int main(void)
{
	int input;
	scanf_s("%d", &input);
	if (input % 2 == 0) {
		printf("�Է��� ���� %d�� ¦���Դϴ�", input);
	}
	else
		printf("�Է��� ���� %d�� Ȧ���Դϴ�", input);
	return 0;
}