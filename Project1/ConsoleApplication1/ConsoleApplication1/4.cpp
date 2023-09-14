#include <stdio.h>

int main(void)
{
	int count, sum=0;
	for (count = 1; count <= 10; count++) {
		if (count % 2 != 0) {
			sum += count;
		}
	}
	printf("%d", sum);
}