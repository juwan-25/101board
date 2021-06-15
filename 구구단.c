#include <stdio.h>

void main(void)
{
	/* 이중 for문 */
	/* dan : 2개, su : 9개 => 18개 경우의 수 */

	for (int dan = 2; dan <= 9; dan++)
	{
		for (int su = 1; su <= 9; su++)
		{
			printf("%d X %d = %d \n", dan, su, dan * su);
		}
		printf(" \n");
	}
}
