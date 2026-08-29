#include <stdio.h>

int main(void)
{
	//variable declarations
	double d;
	double *ptr = NULL;

	//code
	d = 4.346457;

	printf("\n\n");
	printf("*****BEFORE ptr*****\n\n");
	printf("Value Of 'd'            = %lf\n\n", d);
	printf("Address Of 'd'          = %p\n\n", &d);
	printf("Value At Address Of 'd' = %lf\n\n", *(&d));

	ptr = &d;

	printf("\n\n");

	printf("*****AFTER ptr*****\n\n");
	printf("Value Of 'd'              = %lf\n\n", d);
	printf("Address Of 'd'            = %p\n\n", ptr);
	printf("Value At Address Of 'd' = %lf\n\n", *ptr);

	return(0);
}
