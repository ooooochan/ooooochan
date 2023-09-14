#include <stdio.h>

int main(void)
{
	int input;
	scanf_s("%d", &input);
	if (input % 2 == 0) {
		printf("입력한 정수 %d는 짝수입니다", input);
	}
	else
		printf("입력한 정수 %d는 홀수입니다", input);
	return 0;
}