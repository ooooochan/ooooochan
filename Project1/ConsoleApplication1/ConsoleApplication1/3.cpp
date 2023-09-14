#include <stdio.h>

int main(void)
{
	char input;

	scanf_s("%c",&input);
	switch (input)
	{
	case'A':
	case'a':
		printf("만물이 소생하는 계절");
		break;
	case'S':
	case's':
		printf("시원한 계곡을 즐기는 계절");
		break;
	case'D':
	case'd':
		printf("곡식과 과일이 풍성한 계절");
		break;
	case'F':
	case'f':
		printf("새하얀 눈이 덮인 스키의 계절");
		break;
	default:
		printf("오류");
		break;
	}
}