#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	void* vptr = &num;

	//num의 주소값
	printf("%p %p %p \n", &num, ptr, vptr);
	//3 출력
	printf("%p %p \n", num, *ptr);
	//void* 자료형은 내부값을 볼 수 없음(역참조 불가)
	//printf("%p \n", *vptr);
}