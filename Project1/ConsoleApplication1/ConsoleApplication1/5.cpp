#include <stdio.h>

int main(void)
{
	int a = 2, b = 1, re = 0;
	while (a <= 9) {
		if (a == 5) {
			a++;
			continue;
		}
		while (b <= 9) {
			re = a * b;
			printf("%d\n", re);
			b++;
		}
		a++;
		b = 1;
	}
}