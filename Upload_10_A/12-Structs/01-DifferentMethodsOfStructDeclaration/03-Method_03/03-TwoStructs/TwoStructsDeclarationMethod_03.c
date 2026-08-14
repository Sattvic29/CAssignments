#include <stdio.h>

int main(void)
{
	//Defining Struct
	struct MyPoint
	{
		int x;
		int y;
	} point;

	//Defining Struct
	struct MyPointProperties
	{
		int quadrant;
		char axis_location[10];
	} point_properties;

	//code
	//User Input For The 'data member'
	printf("\n\n");
	printf("Enter X-Coordinates For A Point : ");
	scanf("%d", &point.x);
	printf("Enter Y-Coordinates For A Point : ");
	scanf("%d", &point.y);

	printf("\n\n");
	printf("Point Coordinates (x, y) Are : (%d, %d) !!!\n\n", point.x, point.y);

	if (point.x == 0 && point.y == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point.x, point.y);
	else
	{
		if (point.x == 0)
		{
			if (point.y < 0)
				strcpy(point_properties.axis_location, "Negative Y");
			if (point.y > 0)
				strcpy(point_properties.axis_location, "Positive Y");

			point_properties.quadrant = 0;

			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else if (point.y == 0)
		{
			if (point.x < 0)
				strcpy(point_properties.axis_location, "Negative X");
			if (point.x > 0)
				strcpy(point_properties.axis_location, "Positive X");

			point_properties.quadrant = 0;
			printf("The Point Lies On The %s Axis !!\n\n", point_properties.axis_location);
		}
		else
		{
			point_properties.axis_location[0] = '\0';

			if (point.x > 0 && point.y > 0)
				point_properties.quadrant = 1;
			else if (point.x < 0 && point.y > 0)
				point_properties.quadrant = 2;
			else if (point.x < 0 && point.y < 0)
				point_properties.quadrant = 3;
			else
				point_properties.quadrant = 4;

			printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant);
		}
	}
	return(0);
}
