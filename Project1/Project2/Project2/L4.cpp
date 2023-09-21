#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
	double x = 0; // x ��ǥ
	double y = 0; // y ��ǥ

	int count = 0, circle = 0, r = 1, L = 0;
	double pi = 0;
	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;
		if (sqrt(pow(x, 2) + pow(y, 2)) < r) {
			circle++;
		}
		pi = 4 * ((double)circle / count);
		if (count % 10000000 == 0) {
			L = ((double)count / 1000000000) * 100;
			printf("%d%%����.. ", L);
			printf("������ : %f\n", pi);
		}
	}
	printf("������ : %f", pi);
}