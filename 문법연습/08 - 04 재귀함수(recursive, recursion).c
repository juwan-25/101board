#include <stdio.h>

int factorial(int num) // �Ű����� parameter
{
	if (num == 1)
		return 1;
}

void main (void) 
{
	int val = 1;
	int a = factorial(val); // �μ� argument
	printf("%d ���丮���� %d \n", val, a);
}