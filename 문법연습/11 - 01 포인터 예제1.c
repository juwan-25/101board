#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;

	printf("num�ȿ� ����ִ� �� %d\n", num);//num�� ���� ���� ->3
	printf("num�� �޸� �ּҰ� %p\n", &num); //num�� �ּҰ� ���� 
	printf("ptr�ȿ� ����ִ� �� %p\n", ptr); //num�� �ּҰ� ���� 
	//�ּҴ� �����Ͻ� �׻� �ٸ��� ����
	//%p�� 16����, %d�� 10���� -> ���� �����ʹ� %p ���
}