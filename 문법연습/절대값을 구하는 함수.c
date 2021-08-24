#include <stdio.h>

int abs(int num);

void main(void)
{
	printf("%d", abs(-7));
}

int abs(int num)
{
	if (num < 0) num = -num;
	else num = num;
	
	return num;
}