#include <stdio.h>

void main(void)
{
	/* ���� for�� */
	/* dan : 2��, su : 9�� => 18�� ����� �� */

	for (int dan = 2; dan <= 9; dan++)
	{
		for (int su = 1; su <= 9; su++)
		{
			printf("%d X %d = %d \n", dan, su, dan * su);
		}
		printf(" \n");
	}
}
