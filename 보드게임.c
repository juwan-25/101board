/*
*	z : 549 507 6524
*	�������
*	�� 40ĭ
*	�÷����� �Ӽ�
*		1. �� :20,000,000 ����
*		2. ������ġ : 0���� ����
		3. Ȳ�ݿ���
			���ϴ� �� ���� ����
			���� �����ϰ� �ش�( -5�� ~ +5�� )
			TODO : �������´�

	�ֻ��� 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	// �÷��̾��� ��ġ (0���� ����)
	int position = 0;
	// �ֻ���
	int dice;
	// ������ �� ��
	const int finish = 60;
	//���� 2õ������ ����
	int money = 2000000;

	srand(time(0));

	printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);

	/*
	���� �ݺ�
	if�� ���� ���������� ���� �� ������ ���̸� �ٽ� ������
	*/
	while (1)
	{
		/*
		����Ű�� ������ �����Ŵ
		scanf�� ����� ����, �ƹ� ���̳� �Է� �޵��� ��
		*/
		getchar();

		/* �� ��° ���� */
		/*
		�ֻ����� 1~6���� ������ ����
		%6 -> 0,1,2,3,4,5 ����, 1�� ���ϸ� 1~6
		*/
		dice = rand() % 6 + 1;
		printf("�ֻ����� ������ %d�� ���Խ��ϴ�.\n\n", dice);

		//���� �ֻ��� ���� ���� ��ġ�� ����
		position += dice;
		printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);

		switch (position)
		{
		case 10:
			printf("��ġ10�� ���� ��, �ֻ����� �ٽ� �����ϴ�");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("�ֻ����� %d��(��) ���ͼ� %d���� ȹ���Ͽ����ϴ�.\n", dice_money, 100000 * dice_money);
			printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);
			break;

		case 20:
			printf("���õ�� - ��ġ 20�� ���� ��, ����� 20%%�� ��ȸ�� ����մϴ�.\n");
			money = (int)(money * 0.8);
			printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);
			break;

		case 30:
			printf("��ġ 30�� ���� ��, �ֻ��� ������ŭ �� ���ư��ϴ�.\n");
			position += dice;
			printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);
			break;
		case 59:
			printf("��ġ 59�� ���� ��, ó�� �������� ���ư��ϴ�.\n");
			position = 0;
			printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);
			break;

			// 3�ϵ��� �������� ����
		case 49:
			printf("*��ġ 49*�� ������, 3�ϵ��� ������ �� �����ϴ�.\n");
			for (int i = 1; i <= 3; i++)
			{
				getchar();
				printf("%d ���Դϴ�.\n", i);
				dice = rand() % 6 + 1;
				printf("�ֻ����� %d�� ���Խ��ϴ�.\n", dice);

				// �ֻ����� ������ 3�� ������ ���ε��� Ż��
				if (dice == 3)
				{
					printf("�����մϴ� %d��(��) ���Խ��ϴ�.", dice);
					break;
				}
			}
			printf("���ε��� Ż���Ͽ����ϴ�. \n");
			printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);
			break;
		}
		printf("���ε��� Ż���Ͽ����ϴ�");
		printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);
		break;
	}
		
		if (position==finish)
		{
			printf("�� ���� ���� ��, �ݾ��� 2�谡 �˴ϴ�. \n");
			money *= 2;
			printf("������ġ : %d, ����ݾ� : %d\n\n", position, money);
		}

		//switch������ ���� �Ұ���_���� ���� �Ұ�
		if (position > finish)
		{
			printf("�����մϴ�. �������� �����ϼ̽��ϴ�.\n");
		}
	}
	


