#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c;
	printf("학생수 입력 : ");
	scanf_s("%d", &c);

	int* score;
	score = (int*)malloc(sizeof(int) * c);

	for (int i = 0; i < c; i++) {
		printf("학생 # %d-%d 성적 입력: ", c, i + 1);
		scanf_s("%d", score + i);
	}

	int sum = 0;
	for (int i = 0; i < c; i++) {
		sum += score[i];
	}
	printf("%d", sum);
}