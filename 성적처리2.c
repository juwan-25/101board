#include <stdio.h>

// 입력받은 점수(score)에 대한 등급을 출력
void cal_grade(int score)
{
	if (score >= 90 && score <= 100)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("E");
	printf("\n");
}

void main(void)
{
	int c_score, java_score, ca_score;
	printf("C언어 점수를 입력하시오 : ");
	scanf("%d", &c_score);

	cal_grade(c_score);


	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &java_score);

	cal_grade(java_score);

	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf("%d", &ca_score);

	cal_grade(ca_score);
}