#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;

	printf("num안에 들어있는 값 %d\n", num);//num의 값이 나옴 ->3
	printf("num의 메모리 주소값 %p\n", &num); //num의 주소가 나옴 
	printf("ptr안에 들어있는 값 %p\n", ptr); //num의 주소가 나옴 
	//주소는 컴파일시 항상 다르게 나옴
	//%p는 16진수, %d는 10진수 -> 보통 포인터는 %p 사용
}