#include <stdio.h>

int main(void)
{
	//variable delcrations
	int a;
	int* ptr = NULL;

	//code
	a = 11;

	printf("\n\n");

	printf("*****BEFORE ptr*****\n\n");
	printf("Value Of 'a'          = %d\n\n", a);
	printf("Address Of 'a'        = %p\n\n", &a);
	printf("Value At Address Of a = %d\n\n", *(&a));

	ptr = &a;

	printf("\n\n");

	printf("*****AFTER ptr****\n\n");
	printf("Value Of 'a'            = %d\n\n", a);
	printf("Address Of 'a'          = %p\n\n", ptr);
	printf("Value At Address Of 'a' = %d\n\n", *ptr);

	return(0);
}
