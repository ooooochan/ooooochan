#include <stdio.h>

int main()
{
	int input, input2;
	scanf_s("%d", &input);
	input2 = (input * 2) - 1;
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= (2*i-1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
