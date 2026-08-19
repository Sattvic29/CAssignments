#include <stdio.h>

int main(void)
{
	//variable declarations
	int iArray[10];
	int* ptr_Array = NULL;
	int i;

	//code
	for (i = 0; i < 10; i++)
		iArray[i] = (i + 1) * 3;


	ptr_Array = iArray;

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("iArray[%d] = %d\n", i, *(ptr_Array + i));

	printf("\n\n");
	printf("Elements Of The Integer Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("iArray[%d] = %d \t \t Address = %p\n", i, *(ptr_Array + i),(ptr_Array + i));

	printf("\n\n");

	return(0);
}
