#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	//���ڿ��� ������ ���� �ʰ� �ι��� ���θ��� Ȯ��
	for (int i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
}