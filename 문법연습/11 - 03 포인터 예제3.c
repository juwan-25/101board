#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1 안에 들어있는 값 %d\n", num1); //3
	printf("num2 안에 들어있는 값 %d\n\n", num2); //30

	int* ptr = &num1; //선언과 동시에 초기화
	*ptr = 4; //num1의 값이 바뀜
	ptr = &num2;
	*ptr = 40; //num2의 값이 바뀜
	//ptr의 값은 바뀌지 않음
	
	printf("num1 안에 들어있는 값 %d\n", num1); //4
	printf("num2 안에 들어있는 값 %d\n\n", num2); //40
}