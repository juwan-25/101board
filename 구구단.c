#include <stdio.h>

void main(void)
{
	/* 이중 for문 */
	/* dan : 2개, su : 9개 => 18개 경우의 수 */

	for (int dan = 2; dan <= 9; dan++)
	{
		if(dan == 4) //3단까지만 출력, qkRkx쪽 for문에 대한 break
		{
			break;

		}
		for (int su = 1; su <= 9; su++)
		{
			if (su==5)
			{ 
				break;  //안 쪽 for문에 대한 break
			}
			printf("%d X %d = %d \n", dan, su, dan * su);
		}
		printf(" \n");
	}
}
