#include <stdio.h>

int main(void)
{
	//variable declarations
	float f;
	float* ptr = NULL;

	//code
	f = 3.14f;

	printf("\n\n");

	printf("*****BEFORE ptr*****\n\n");
	printf("Value Of 'f'            = %f\n\n", f);
	printf("Address Of 'f'          = %p\n\n", &f);
	printf("Value At Address Of 'f' = %f\n\n", *(&f));

	ptr = &f;

	printf("\n\n");
	printf("Value Of 'f'             = %f\n\n", f);
	printf("Address Of 'f'           = %p\n\n", ptr);
	printf("Value At Addresss Of 'f' = %f\n\n", *ptr);

	return(0);
}
