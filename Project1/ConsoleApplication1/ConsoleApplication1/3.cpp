#include <stdio.h>

int main(void)
{
	char input;

	scanf_s("%c",&input);
	switch (input)
	{
	case'A':
	case'a':
		printf("������ �һ��ϴ� ����");
		break;
	case'S':
	case's':
		printf("�ÿ��� ����� ���� ����");
		break;
	case'D':
	case'd':
		printf("��İ� ������ ǳ���� ����");
		break;
	case'F':
	case'f':
		printf("���Ͼ� ���� ���� ��Ű�� ����");
		break;
	default:
		printf("����");
		break;
	}
}