#include <stdio.h>
void sort(int* a, int b);
int main(void)
{
	int arr[5] = { 5,7,2,9,1 };
	for (int i = 0;i < 5;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	sort(arr, 5);
	for (int i = 0;i < 5;i++) {
		printf("%d", arr[i]);
	}
}
void sort(int* a, int b) {
	int min, temp;
	for (int i = 0;i < b; i++) {
		min = i;
		for (int j = i + 1;j < b;j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;

	}
}