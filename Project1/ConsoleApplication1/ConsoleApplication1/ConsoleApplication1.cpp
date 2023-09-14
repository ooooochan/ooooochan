#include <stdio.h>

int main(void)
{
	int input;
	scanf_s("%d", &input);
	if (input % 100 == 0) {
		if (input % 4 == 0) {
			printf("윤년입니다");
		}
		else if (input % 400 == 0) {
			printf("윤년입니다");
		}
		else
			printf("윤년이 아닙니다");
	}
	else
		if (input % 4 == 0) {
			printf("윤년입니다");
		}
		else if (input % 400 == 0) {
			printf("윤년입니다");
		}
		else
			printf("윤년이 아닙니다");
}