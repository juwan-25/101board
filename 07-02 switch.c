#include <stdio.h>

void main(void) {
	
	int input;
	printf("���ڸ� �Է��ϼ���(1~8����) : ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("��ī��\n");
		break;
	case 2:
		printf("������\n");
		break;
	case 3:
		printf("���α�\n");
		break;
	case 4:
		printf("����Ǯ\n");
		break;
	case 5:
		printf("���̸�\n");
		break;
	case 6:
		printf("�ߵ���\n");
		break;
	case 7:
		printf("������\n");
		break;
	case 8:
		printf("�ǰ���\n");
		break;
	default :
		printf("�߸� �Է��Ͽ����ϴ�.\n");
		break;
	}

	if (input == 1) 
	printf("��ī��\n");
	else if (input == 2)
	printf("������\n");
	else if (input == 3)
	printf("���α�\n");
	else if (input == 4)
	printf("����Ǯ\n");
	else if (input == 5)
	printf("���̸�\n");
	else if (input == 6)
	printf("�ߵ���\n");
	else if (input == 7)
	printf("������\n");
	else if (input == 8)
	printf("�ǰ���\n");
	else
	printf("�߸� �Է��Ͽ����ϴ�.\n");
}