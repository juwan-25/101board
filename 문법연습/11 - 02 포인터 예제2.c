#include <stdio.h>

void main(void)
{
	int num1 = 3;
	int num2 = 4;
	printf("%d\n", num1);
	printf("%d\n", num2);

	num1 = 30;
	num2 = 40;
	printf("%d\n", num1);
	printf("%d\n", num2);

	int num3 = 15;
	int* ptr = &num3;
	printf("num3 ������ �� %d\n", num3);
	printf("ptr ������ ��(num3 �ּҰ�) %p\n", ptr); //�ּҰ��̱� ������ %p ���
	printf("ptr�� ����Ű�� ���� ������ �� %d\n\n", *ptr); //pointer �� ������ ���� Ȯ���� �� ����

	*ptr = 150;
	printf("num3 ������ �� %d\n", num3);
}