/*
*	z : 549 507 6524
*	보드게임
*	총 40칸
*	플레이의 속성
*		1. 돈 : 2,000,000,000 시작
*		2. 현재위치 : 0부터 시작
		3. 황금열쇠
			원하는 곳 갈수 있음
			돈을 랜덤하게 준다( -5억 ~ +5억 )
			TODO : 돈을뺏는다

	주사위 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// 플레이어의 위치 (0부터 시작)
	int position = 0;
	// 주사위
	int dice;

	srand(time(0));

	printf("현재 위치 : %d\n\n", position);

	/* 
	주사위는 1~6까지 나오게 설정
	%6 -> 0,1,2,3,4,5 나옴, 1을 더하면 1~6
	*/
	dice = rand() % 6 + 1;
	printf("주사위를 던져서 %d가 나왔습니다.\n\n", dice);

	position += dice;
	printf("현재 위치 : %d\n\n", position);




	
}

