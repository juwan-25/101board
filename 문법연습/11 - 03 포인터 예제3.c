#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1 �ȿ� ����ִ� �� %d\n", num1); //3
	printf("num2 �ȿ� ����ִ� �� %d\n\n", num2); //30

	int* ptr = &num1; //����� ���ÿ� �ʱ�ȭ
	*ptr = 4; //num1�� ���� �ٲ�
	ptr = &num2;
	*ptr = 40; //num2�� ���� �ٲ�
	//ptr�� ���� �ٲ��� ����
	
	printf("num1 �ȿ� ����ִ� �� %d\n", num1); //4
	printf("num2 �ȿ� ����ִ� �� %d\n\n", num2); //40
}