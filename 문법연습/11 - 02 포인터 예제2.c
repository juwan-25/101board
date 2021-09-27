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
	printf("num3 내부의 값 %d\n", num3);
	printf("ptr 내부의 값(num3 주소값) %p\n", ptr); //주소값이기 때문에 %p 사용
	printf("ptr이 가리키는 변수 내부의 값 %d\n\n", *ptr); //pointer 안 변수의 값을 확인할 수 있음

	*ptr = 150;
	printf("num3 내부의 값 %d\n", num3);
}