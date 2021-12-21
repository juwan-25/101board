#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void) 
{
	Point a = { 3, 4 };
	Point* ptr = &a;

	//직접접근
	printf("%d %d\n", a.x, a.y);

	//pointer를 활용한 간접접근
	printf("%d %d", (*ptr).x, (*ptr).y);
	printf("%d %d", ptr->x, ptr->y);
}