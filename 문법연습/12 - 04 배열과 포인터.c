#include <stdio.h>

void main(void)
{
	int arr[4] = { 10,20,30,40 };
	int* ptr = arr;

	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
	printf("%d %d %d %d\n", *(arr + 0), *(arr + 1), *(arr + 2), *(arr + 3));
	//포인터를 배열처럼 쓸 수 있다
	//BUT 포인터는 배열이 아니다
	printf("%d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
	printf("%d %d %d %d\n", *(ptr+0), *(ptr + 1), *(ptr + 2), *(ptr + 3));

	printf("%d ", sizeof(arr));
	printf("%d ", sizeof(ptr));

}