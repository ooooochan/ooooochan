#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c;
	printf("�л��� �Է� : ");
	scanf_s("%d", &c);

	int* score;
	score = (int*)malloc(sizeof(int) * c);

	for (int i = 0; i < c; i++) {
		printf("�л� # %d-%d ���� �Է�: ", c, i + 1);
		scanf_s("%d", score + i);
	}

	int sum = 0;
	for (int i = 0; i < c; i++) {
		sum += score[i];
	}
	printf("%d", sum);
}