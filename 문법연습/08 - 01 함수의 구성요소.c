#include <stdio.h>

/*�� ���� ���ڸ� ���ؼ� ��ȯ�ϴ� �Լ�*/
//�Ű����� void�� 0����� ��(������ ����)
int sum(int num1, int num2)
{
	return num1 + num2;
}

int main(void)
{
	int c;
	c = sum(1, 2);
	printf("%d\n", c);
}