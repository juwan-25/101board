#include <stdio.h>

void main(void) {
	
	int input;
	printf("숫자를 입력하세요(1~8까지) : ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("피카츄\n");
		break;
	case 2:
		printf("라이츄\n");
		break;
	case 3:
		printf("꼬부기\n");
		break;
	case 4:
		printf("버터풀\n");
		break;
	case 5:
		printf("파이리\n");
		break;
	case 6:
		printf("야도란\n");
		break;
	case 7:
		printf("피죤투\n");
		break;
	case 8:
		printf("또가스\n");
		break;
	default :
		printf("잘못 입력하였습니다.\n");
		break;
	}

	if (input == 1) 
	printf("피카츄\n");
	else if (input == 2)
	printf("라이츄\n");
	else if (input == 3)
	printf("꼬부기\n");
	else if (input == 4)
	printf("버터풀\n");
	else if (input == 5)
	printf("파이리\n");
	else if (input == 6)
	printf("야도란\n");
	else if (input == 7)
	printf("피죤투\n");
	else if (input == 8)
	printf("또가스\n");
	else
	printf("잘못 입력하였습니다.\n");
}