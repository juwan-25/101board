#include <stdio.h>

/*두 개의 숫자를 더해서 반환하는 함수*/
//매개변수 void는 0개라는 뜻(공간이 없음)
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