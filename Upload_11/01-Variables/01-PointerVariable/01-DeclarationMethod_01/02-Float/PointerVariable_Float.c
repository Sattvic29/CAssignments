#include <stdio.h>

int main(void)
{
	//variable declarations
	float num;
	float* ptr = NULL;

	//code
	num = 2.9f;

	printf("\n\n");

	printf("*****BEFORE ptr*****\n\n");
	printf("Value Of 'num'            = %f\n\n", num);
	printf("Address Of 'num'          = %p\n\n", &num);
	printf("Value At Address Of 'num' = %f\n\n", *(&num));

	ptr = &num;

	printf("\n\n");
	printf("*****AFTER ptr*****\n\n");
	printf("Value Of 'num'            = %f\n\n", num);
	printf("Address Of 'num'          = %p\n\n", ptr);
	printf("Value At Address Of 'num' = %f\n\n", *ptr);

	return(0);
}
