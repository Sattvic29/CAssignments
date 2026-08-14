#include <stdio.h>

//Defing struct
struct MyData
{
	int x;
	int y;
}point_A, point_B, point_C, point_D, point_E;

int main(void)
{
	//code

	//point_A
	point_A.x = 1;
	point_A.y = 2;

	//point_B
	point_A.x = 3;
	point_B.y = 4;

	//point_C
	point_C.x = 5;
	point_C.y = 6;

	//point_D
	point_D.x = 7;
	point_D.y = 8;

	//point_E
	point_E.x = 9;
	point_E.y = 10;

	//'struct MyData'
	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", point_A.x, point_B.y);
	printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", point_B.x, point_B.y);
	printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", point_C.x, point_C.y);
	printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", point_D.x, point_D.y);
	printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", point_E.x, point_E.y);

	return(0);
}
