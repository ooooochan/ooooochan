#include <stdio.h>

int isPrime(int num);

int main(void)
{
	int input, a;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ���");
	scanf_s("%d", &input);
	a = isPrime(input);
	printf("%d", a);
}
int isPrime(int input) {
	int i;
	for (i = 2; i < input; i++) {
		if (input % i == 0) {
			return 1;
		}
		else
			return 0;
	}
}