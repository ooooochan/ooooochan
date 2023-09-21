#include <stdio.h>

int isPrime(int num);

int main(void)
{
	int input, a;
	printf("소수일지 확인할 수를 입력하세요");
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