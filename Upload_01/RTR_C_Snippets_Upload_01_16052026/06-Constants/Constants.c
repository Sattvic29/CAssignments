#include <stdio.h>

#define MY_PI 3.141492653589732

#define AMC_STRING "AstroMediComp"

//Un-named enums
enum
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
};

enum
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER,
};

enum
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
};

enum boolean
{
	TRUE = 1,
	FALSE = 0,
};

int main(void)
{
	//local constant declaration
	const double epsilon = 0.000001;

	//code
	printf("\n\n");
	printf("Local Constant Epsilon = %lf\n\n", epsilon);

	printf("Sunday Is Day Number = %d\n", SUNDAY);
	printf("Monday Is Day Number = %d\n", MONDAY);
	printf("Tuesday Is Day Number = %d\n", TUESDAY);
	printf("Wednesday Is Day Number = %d\n", WEDNESDAY);
	printf("Thursday Is Day Number = %d\n", THURSDAY);
	printf("Friday Is Day Number = %d\n", FRIDAY);
	printf("Saturday Is Day Number = %d\n", SATURDAY);

	printf("January Is Month Number = %d\n", JANUARY);
	printf("February Is Month Number = %d\n", FEBRUARY);
	printf("March Is Month Number = %d\n", MARCH);
	printf("April Is Month Number = %d\n", APRIL);
	printf("May Is Month Number = %d\n", MAY);
	printf("June Is Month Number = %d\n", JUNE);
	printf("July Is Month Number = %d\n", JULY);
	printf("August Is Month Number = %d\n", AUGUST);
	printf("September Is Month Number = %d\n", SEPTEMBER);
	printf("October Is Month Number = %d\n", OCTOBER);
	printf("November Is Month Number = %d\n", NOVEMBER);
	printf("December Is Month Number = %d\n", DECEMBER);

	printf("Value Of TRUE Is = %d\n", TRUE);
	printf("Value Of FALSE Is = %d\n", FALSE);

	printf("MY_PI Macro value = %.101f\n\n", MY_PI);
	printf("Area Of Circle Of Radius 2 units = %f\n\n", (MY_PI * 2.0f * 2.0f));

	printf("\n\n");

	printf(AMC_STRING);
	printf("\n\n");
}

