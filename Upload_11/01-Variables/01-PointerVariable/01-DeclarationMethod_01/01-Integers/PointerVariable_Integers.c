#include <stdio.h>

int main(void)
{
	//variable declarations
	int num;
	int* ptr = NULL;

	//code
	num = 10;
	printf("\n\n");

	printf("*****BEFORE ptr*****\n\n");
	printf("Value Of 'num'            = %d\n\n", num);
	printf("Address of 'num'          = %p\n\n", &num);
	printf("Value At Address Of 'num' = %d\n\n", *(&num));

	ptr = &num;

	printf("\n\n"); 
	printf("Value Of 'num'            = %d\n\n", num);
	printf("Address Of 'num'          = %p\n\n", ptr);
	printf("Value At Address Of 'num' = %d\n\n", *ptr);

	return(0);
}
