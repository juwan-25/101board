#include <stdio.h>

void main(void)
{
	/* ���� for�� */
	/* dan : 2��, su : 9�� => 18�� ����� �� */

	for (int dan = 2; dan <= 9; dan++)
	{
		if(dan == 4) //3�ܱ����� ���, �ٱ� �� for���� ���� continue, 4�ܸ� ��ŵ
			continue;
		for (int su = 1; su <= 9; su++)
		{
			if (su==5)
				continue;  //�� �� for���� ���� continue,5�� ��ŵ

			printf("%d X %d = %d \n", dan, su, dan * su);
		}

		printf(" \n");
	}
}
