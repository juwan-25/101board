#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void) 
{
	Point a = { 3, 4 };
	Point* ptr = &a;

	//��������
	printf("%d %d\n", a.x, a.y);

	//pointer�� Ȱ���� ��������
	printf("%d %d", (*ptr).x, (*ptr).y);
	printf("%d %d", ptr->x, ptr->y);
}