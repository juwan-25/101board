#include <stdio.h>

void main(void) 
{
	int arr[4] = { 10,20,30,40 };
	char str[4] = "ACE"; //null ���� �ʿ��ϱ� ������ ���� 4�� ����

	printf("%d %d\n", arr[0], *arr);
	printf("%d %d\n", arr[1], *(arr+1));
	printf("%d\n", *arr+1);

	printf("%c %c\n", str[0], *str);
	printf("%c %c\n", str[1], *(str+1));
	printf("%c\n", *str+1);


}