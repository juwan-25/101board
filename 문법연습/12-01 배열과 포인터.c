#include <stdio.h>

void main(void)
{
	int arr[4];

	printf("%p\n", &arr[0]); //0번째 공간 주소
	printf("%p\n", arr); //배열 시작 주소
	printf("%p\n\n", &arr[1]);
	
	char str[4];

	printf("%p\n", &str[0]);
	printf("%p\n", str);
	printf("%p\n", &str[1]);
}