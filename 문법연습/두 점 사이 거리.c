#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

double Distance(Point p1, Point p2);

void main(void)
{
	Point p1 = { 0,0 }, p2 = { 3,4 };
	printf("%lf \n", Distance(p1, p2));
}

double Distance(Point p1, Point p2)
{
	double distance_x = (p2.x - p1.x) * (p2.x - p1.x);
	double distance_y = (p2.y - p1.y) * (p2.y - p1.y);
	double tot_distance = distance_x + distance_y;
	return sqrt(tot_distance);
}