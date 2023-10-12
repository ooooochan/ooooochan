#include <stdio.h>

void sort(int* a, int b);

int main(void)
{
	int arr[5] = { 5,1,8,2,4 };

	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	sort(arr, 5);
}
void sort(int* a, int b) {
	int min = a[0], temp = 0;
	printf("\n");
	printf("%d\n", min);
	for (int i = 0; i < b; i++) {
		if (min > a[i]) {
			temp = min;
			min = a[i];
			a[i] = min;
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("%d", min);
}