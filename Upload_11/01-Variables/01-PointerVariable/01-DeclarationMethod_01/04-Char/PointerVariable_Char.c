#include <stdio.h>

int main(void)
{
	//variable declarations
	char ch;
	char *ptr = NULL;

	//code
	ch = 'A';

	printf("\n\n");

	printf("*****BEFORE ptr*****\n\n");
	printf("Value Of 'ch'            = %c\n\n", ch);
	printf("Address Of 'ch'          = %p\n\n", &ch);
	printf("Value At Address Of 'ch' = %c\n\n", *(&ch));

	ptr = &ch;
	
	printf("*****AFTER ptr*****\n\n");
	printf("Value Of 'ptr'           = %c\n\n", ch);
	printf("Address Of 'ptr'         = %p\n\n", ptr);
	printf("Value At Address Of 'ch' = %c\n\n", *ptr);

	return(0);
}
