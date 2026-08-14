#include <stdio.h>

struct Rectangle
{
	struct MyPoint
	{
		int x;
		int y;
	} point_01, point_02;
} rect;

int main(void)
{
	//variable declaration
	int length, breadth, area;

	//code
	printf("\n\n");
	printf("Enter Leftmost X-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_01.x);

	printf("\n\n");
	printf("Enter Bottommost Y-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_01.y);

	printf("\n\n");
	printf("Enter Rightmost X-Coordinates Of Rectangle : ");
	scanf("%d", &rect.point_02.x);

	printf("\n\n");
	printf("Enter Topmost Y-coordinates Of Rectangle : ");
	scanf("%d", &rect.point_02.y);

	length = rect.point_02.y - rect.point_01.y;
	if (length < 0)
		length = length * -1;

	breadth = rect.point_01.y - rect.point_01.x;
	if (length < 0)
		breadth = breadth * -1;

	area = length * breadth;

	printf("\n\n");
	printf("Length Of Rectangle = %d\n\n", length);
	printf("Breadth Of Rectangle = %d\n\n", breadth);
	printf("Area Of Rectangle = %d\n\n", area);

	return(0);
}
