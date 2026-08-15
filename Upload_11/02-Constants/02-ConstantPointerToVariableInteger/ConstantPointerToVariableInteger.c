#include <stdio.h>

int main(void)
{
	//variable declarations
	int num = 5;
	int* const ptr = &num;

	//code
	printf("\n\n");
	printf("Current Value Of 'num' = %d\n", num);
	printf("Current 'ptr' (Address Of num) = %p\n", ptr);

	num++;
	printf("\n\n");
	printf("After num++, Value Of 'num' = %d\n", num);

	(*ptr)++;
	printf("\n\n");
	printf("After (*ptr)++, Value Of 'ptr' = %p\n", ptr);
	printf("Value At This 'ptr' = %d\n", *ptr);
	printf("\n\n");
	return(0);
}
