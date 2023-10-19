#include <stdio.h>
#include <stdlib.h>

struct S {
	int sno;
	char name[10];
	int score;
};

int main(void)
{
	int c;
	printf("학생수 입력 : ");
	scanf_s("%d", &c);

	struct S* std;
	std = (struct S*)malloc(sizeof(struct S) * c);

	for (int i = 0; i < c; i++) {
		printf("학생 # %d-%d 학번 입력: ", c, i + 1);
		scanf_s("%d", &(std[i].sno));

		printf("학생 # %d-%d 이름 입력: ", c, i + 1);
		scanf_s("%s",std[i].name, 10);

		printf("학생 # %d-%d 성적 입력: ", c, i + 1);
		scanf_s("%d", &(std[i].score));
	}

	int sum = 0;
	for (int i = 0; i < c; i++) {
		sum += std[i].score;
	}
	printf("%d", sum);
}