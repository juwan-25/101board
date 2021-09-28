#include <stdio.h>

void changeA(int* num);

void main(void)
{
	int A = 3;
	printf("바꾸기 전 %d\n", A);
	/*
	함수의 argument로 A의 주소값을 넘긴다.
	매개변수 num은 변수 A를 가리킨다.
	*/
	changeA(&A);
	printf("바꾸기 후 %d\n", A);
}
void changeA(int* num)
{
	// num이 가리키고 있는 변수(A) 안에 들어있는 값을 5로 바꾼다.
	*num = 5; //*가 없으면 num이라는 변수의 값이 바뀐다.
}