#include <stdio.h>

int factorial(int num) // �Ű����� parameter
{
	if (num == 1)
		return 1;
	return num * factorial(num - 1); // 3! = 3 * 2!, 2!= 2 * 1!, 1! = 1
}
void main (void) 
{
	int val = 3;
	int a = factorial(val); // �μ� argument
	printf("%d ���丮���� %d \n", val, a);
}