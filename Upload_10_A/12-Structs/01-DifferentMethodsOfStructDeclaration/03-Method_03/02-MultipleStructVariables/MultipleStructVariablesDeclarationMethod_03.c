#include <stdio.h>

int main(void)
{
	//Defining Struct
	struct MyPoint
	{
		int x;
		int y;
	} point_a, point_b, point_c, point_d, point_e;

	//code

	//point_a
	point_a.x = 1;
	point_a.y = 2;

	//point_b
	point_b.x = 3;
	point_b.y = 4;

	//point_c
	point_c.x = 5;
	point_c.y = 6;

	//point_d
	point_d.x = 7;
	point_d.y = 8;

	//point_e
	point_e.x = 9;
	point_e.y = 10;

	//Displaying  Values Of The Data Members
	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point Are : (%d, %d)\n\n", point_a.x, point_a.y);
	printf("Co-ordinates (x, y) Of Point Are : (%d, %d)\n\n", point_b.x, point_b.y);
	printf("Co-ordinates (x, y) Of Point Are : (%d, %d)\n\n", point_c.x, point_c.y);
	printf("Co-ordinates (x, y) Of Point Are : (%d, %d)\n\n", point_d.x, point_d.y);
	printf("Co-ordinates (x, y) Of Point Are : (%d, %d)\n\n", point_e.x, point_e.y);

	return(0);
}
