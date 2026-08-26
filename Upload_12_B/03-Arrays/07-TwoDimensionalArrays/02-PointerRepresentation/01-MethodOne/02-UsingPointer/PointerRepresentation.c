#include <stdio.h>

#define NUM_ROWS 6
#define NUM_COLUMNS 4

int main(void)
{
	//variable declarations
	int iArray[NUM_ROWS][NUM_COLUMNS];
	int i, j;

	int* ptr_iArray_Row = NULL;

	for (i = 0; i < NUM_ROWS; i++)
	{
		ptr_iArray_Row = iArray[i];

		for (j = 0; j < NUM_COLUMNS; j++)
			*(ptr_iArray_Row + j) = (i + 1) * (j + 1);
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Addreses : \n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		ptr_iArray_Row = iArray[i];

		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("*(ptr_iArray_Row + %d) = %d \t \t At Address (ptr_iArray_Row + j) = %p\n", j, *(ptr_iArray_Row + j), (ptr_iArray_Row + j));
		}

		printf("\n\n");
	}

	return(0);
}
