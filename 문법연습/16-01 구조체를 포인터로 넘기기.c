#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void) 
{
/*
* stack ���� �Ҵ�
	Point a = { 3, 4 };
	Point* ptr = &a;
*/
	//heap ���� �Ҵ�
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;

	//��������
	printf("%d %d\n", a.x, a.y);

	//pointer�� Ȱ���� ��������
	printf("%d %d", (*ptr).x, (*ptr).y);
	printf("%d %d", ptr->x, ptr->y);


}