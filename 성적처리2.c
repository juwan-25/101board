#include <stdio.h>

// �Է¹��� ����(score)�� ���� ����� ���
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
	printf("C��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &c_score);

	cal_grade(c_score);


	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &java_score);

	cal_grade(java_score);

	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &ca_score);

	cal_grade(ca_score);
}