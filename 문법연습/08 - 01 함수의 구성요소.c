#include <stdio.h>

/*두 개의 숫자를 더해서 반환하는 함수*/
//매개변수 void는 0개라는 뜻(공간이 없음)
void sum(int num1, int num2)
{
	printf("%d\n", num1+num2);
}

int main(void)
{
	sum(1, 2);
}