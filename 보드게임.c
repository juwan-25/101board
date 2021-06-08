/*
*	z : 549 507 6524
*	보드게임
*	총 40칸
*	플레이의 속성
*		1. 돈 :20,000,000 시작
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
	// 공간의 끝 점
	const int finish = 60;
	//돈은 2천만부터 시작
	int money = 2000000;

	srand(time(0));

	printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);

	/*
	무한 반복
	if와 같은 구조이지만 실행 후 조건이 참이면 다시 실행함
	*/
	while (1)
	{
		/*
		엔터키를 눌러서 진행시킴
		scanf와 비슷한 원리, 아무 값이나 입력 받도록 함
		*/
		getchar();

		/* 두 번째 던짐 */
		/*
		주사위는 1~6까지 나오게 설정
		%6 -> 0,1,2,3,4,5 나옴, 1을 더하면 1~6
		*/
		dice = rand() % 6 + 1;
		printf("주사위를 던져서 %d가 나왔습니다.\n\n", dice);

		//던진 주사위 값을 현재 위치에 적용
		position += dice;
		printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);

		switch (position)
		{
		case 10:
			printf("위치10에 있을 때, 주사위를 다시 던집니다");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("주사위가 %d이(가) 나와서 %d원을 획득하였습니다.\n", dice_money, 100000 * dice_money);
			printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);
			break;

		case 20:
			printf("기부천사 - 위치 20에 있을 때, 재산의 20%%를 사회에 기부합니다.\n");
			money = (int)(money * 0.8);
			printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);
			break;

		case 30:
			printf("위치 30에 있을 때, 주사위 던진만큼 더 나아갑니다.\n");
			position += dice;
			printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);
			break;
		case 59:
			printf("위치 59에 있을 때, 처음 지점으로 돌아갑니다.\n");
			position = 0;
			printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);
			break;

			// 3턴동안 움직이지 못함
		case 49:
			printf("*위치 49*에 있을때, 3턴동안 움직일 수 없습니다.\n");
			for (int i = 1; i <= 3; i++)
			{
				getchar();
				printf("%d 턴입니다.\n", i);
				dice = rand() % 6 + 1;
				printf("주사위가 %d가 나왔습니다.\n", dice);

				// 주사위를 던져서 3이 나오면 무인도를 탈출
				if (dice == 3)
				{
					printf("축하합니다 %d이(가) 나왔습니다.", dice);
					break;
				}
			}
			printf("무인도를 탈출하였습니다. \n");
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;
		}
		printf("무인도에 탈출하였습니다");
		printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);
		break;
	}
		
		if (position==finish)
		{
			printf("끝 점에 있을 때, 금액이 2배가 됩니다. \n");
			money *= 2;
			printf("현재위치 : %d, 현재금액 : %d\n\n", position, money);
		}

		//switch문으로 수정 불가함_범위 지정 불가
		if (position > finish)
		{
			printf("축하합니다. 목적지에 도착하셨습니다.\n");
		}
	}
	


