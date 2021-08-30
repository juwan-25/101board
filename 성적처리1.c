#include <stdio.h>

void main(void)
{
	int c_score;
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &c_score);

	if (c_score >= 90 && c_score <= 100)
		printf("A");
	else if (c_score >= 80)
		printf("B");
	else if (c_score >= 70)
		printf("C");
	else if (c_score >= 60)
		printf("D");
	else
		printf("E");

}