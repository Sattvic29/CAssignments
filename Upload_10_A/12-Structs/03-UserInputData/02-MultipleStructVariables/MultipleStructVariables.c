#include <stdio.h>

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
	printf("\n\n");
	printf("Enter X-Coordinates For Point 'A' : ");
	scanf("%d", &point_a.x);
    printf("Enter Y-Coordinates For Point 'A' : ");
	scanf("%d", &point_a.y);

	//point_b
	printf("Enter X-Coordinates For Point 'B' : ");
	scanf("%d", &point_b.x);
    printf("Enter Y-Coordinates For Point 'B' : ");
	scanf("%d", &point_b.y);

	//point_c
	printf("Enter X-Coordinates For Point 'C' : ");
	scanf("%d", &point_c.x);
    printf("Enter Y-Coordinates For Point 'C' : ");
	scanf("%d", &point_c.y);

	//point_d
	printf("Enter X-Coordinates For Point 'D' : ");
	scanf("%d", &point_d.x);
    printf("Enter Y-Coordinates For Point 'D' : ");
	scanf("%d", &point_d.y);

	//point_e
	printf("Enter X-Coordinates For Point 'E' : ");
	scanf("%d", &point_e.x);
	printf("Enter Y-Coordinates For Point 'E' : ");
	scanf("%d", &point_e.y);

	//Displaying Value For 'data members'
	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", point_a.x, point_a.y);
	printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", point_b.x, point_b.y);
	printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", point_c.x, point_c.y);
	printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", point_d.x, point_d.y);
	printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", point_e.x, point_e.y);

	return(0);
}
