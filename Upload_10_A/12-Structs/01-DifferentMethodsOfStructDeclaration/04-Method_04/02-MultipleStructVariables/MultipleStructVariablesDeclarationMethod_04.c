#include <stdio.h>

//defing struct
struct MyPoint
{
	int x;
	int y;
};

int main(void)
{
	//variable declarations
	struct MyPoint point_a, point_b, point_c, point_d, point_e;

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

	//Displaying values of the data member
	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' ARE : (%d, %d)\n\n", point_a.x, point_a.y);
	printf("Co-ordinates (x, y) Of Point 'B' ARE : (%d, %d)\n\n", point_b.x, point_b.y);
	printf("Co-ordinates (x, y) Of Point 'C' ARE : (%d, %d)\n\n", point_c.x, point_c.y);
	printf("Co-ordinates (x, y) Of Point 'D' ARE : (%d, %d)\n\n", point_d.x, point_d.y);
	printf("Co-ordinates (x, y) Of Point 'E' ARE : (%d, %d)\n\n", point_e.x, point_e.y);

	return(0);
}
