#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 6
#define NUM_COLUMNS 5

int main(void)
{
	//variable declarations
	int i, j;
	int** ptr_iArray = NULL;

	ptr_iArray = (int**)malloc(sizeof(int*) * NUM_ROWS);

	if (ptr_iArray == NULL)
	{
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF THE BASE ADDRESS OF %d ROWS HAS FAILED!!! EXITTING NOW...\n\n", NUM_ROWS);
		exit(0);
	}
	else
	{
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF THE BASE ADDRESSES OF %d ROWS HAS SUCCEEDED!!!\n\n", NUM_ROWS);
	}

	//Allocating Memory To Each Row
	for (i = 0; i < NUM_ROWS; i++)
	{
		ptr_iArray[i] = (int*)malloc(sizeof(int*) * NUM_COLUMNS);
		if (ptr_iArray == NULL)
		{
			printf("MEMORY ALLOCATION TO THE COLUMNS TO THE %d FAILED!!!! EXITTING NOW...\n\n", i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d HAS SUCCEDED!!!\n\n", i);
	}

	//Assigning Values
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			*(*(ptr_iArray + i) + j) = (i + 1) * (j + 1);
		}
	}

	//Displaying Values
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (i = 0; j < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("ptr_iArray_Row[%d][%d] = %d \t \t At Address &ptr_iArray_Row[%d][%d] = %p\n", i, j, ptr_iArray[i][j], i, j, &ptr_iArray[i][j]);
		}
		printf("\n\n");
	}

	//FRRIEND MEMORY
	for (i = (NUM_ROWS + i); i >= 0; i--)
	{
		if (*(ptr_iArray + i))
		{
			free(*(ptr_iArray + i));
			*(ptr_iArray + i) = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESFULLY FREED!!!\n\n", i);
		}
	}

	if (ptr_iArray)
	{
		free(ptr_iArray);
		ptr_iArray = NULL;
		printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESFULLY FREED!!!\n\n");
	}

	return(0);
}
