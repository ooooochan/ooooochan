#include <stdio.h>

void cal(int a);
double sum(double num1, double num2);
double sub(double num1, double num2);
double mul (double num1, double num2);
double div(double num1, double num2);

int main(void)
{
	int input;
	printf("1.���ϱ�, 2.����, 3.���ϱ�, 4.������");
	scanf_s("%d",& input);

	cal(input);

	return 0;
}
void cal(int a) {

	double num1, num2;

	printf("ù��° �� �Է�");
	scanf_s("%lf", &num1);

	printf("�ι�° �� �Է�");
	scanf_s("%lf", &num2);

	double re = 0;

	if (a == 1) {
		re = sum(num1, num2);
	}
	else if (a == 2) {
		re = sub(num1, num2);
	}
	else if (a == 3) {
		re = mul(num1, num2);
	}
	else if (a == 4) {
		re = div(num1, num2);
	}
	printf("%lf", re);
}
double sum(double num1, double num2) {
	double re;
	re = num1 + num2;
	return re;
}
double sub(double num1, double num2) {
	double re;
	re = num1 - num2;
	return re;
}
double mul(double num1, double num2) {
	double re;
	re = num1 * num2;
	return re;
}
double div(double num1, double num2) {
	double re;
	re = num1 / num2;
	return re;
}