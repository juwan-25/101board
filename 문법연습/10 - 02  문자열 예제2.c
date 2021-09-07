#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	//문자열의 갯수를 세지 않고 널문자 여부만을 확인
	for (int i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
}