#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void) 
{
/*
* stack 영역 할당
	Point a = { 3, 4 };
	Point* ptr = &a;
*/
	//heap 영역 할당
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;

	//직접접근
	printf("%d %d\n", a.x, a.y);

	//pointer를 활용한 간접접근
	printf("%d %d", (*ptr).x, (*ptr).y);
	printf("%d %d", ptr->x, ptr->y);


}