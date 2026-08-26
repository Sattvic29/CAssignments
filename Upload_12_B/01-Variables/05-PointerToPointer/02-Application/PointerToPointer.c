#include <stdio.h>

int main(void)
{
	//variable declarations
	int num;
	int* ptr = NULL;
	int** pptr = NULL;

	//code
	num = 10;

	printf("\n\n");

	printf("*****BEFORE ptr = &num*****\n\n");
	printf("Value Of 'num' = %d\n", num);
	printf("Address Of 'num' = %p\n", &num);
	printf("Value At Address Of 'num' = %d\n", *(&num));

	ptr = &num;

	printf("\n\n");

	printf("*****AFTER ptr = &num*****\n\n");
	printf("Value Of 'num' = %d\n", num);
	printf("Address Of 'num' = %p", ptr);
	printf("Value At Address Of 'num' = %d\n", *ptr);

	pptr = &ptr;

	printf("\n\n");

	printf("*****AFTER pptr = &ptr*****\n\n");
	printf("Value Of 'num' = %d\n", num);
	printf("Address Of 'num' (ptr) = %p\n", ptr);
	printf("Address Of 'ptr' (pptr) = %p\n", pptr);
	printf("Value At Address Of 'ptr' (*pptr) = %p\n", *pptr);
	printf("Value At Address Of 'num' (*ptr) (*pptr) = %d\n", **pptr);

	return(0);
}
