#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS_ONE 3
#define NUM_COLUMNS_TWO 8

int main(void)
{
	//variable declarations
	int* iArray[NUM_ROWS];
	int i, j;

	//code
	printf("\n\n");
	printf("*****FIRST MEMORY ALLOCATION TO 2D INTEGER ARRAY*****\n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		iArray[i] = (int*)malloc(NUM_COLUMNS_ONE * sizeof(int));
		if (iArray == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY!!! EXITTING NOW...\n\n");
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION IS SUCCEEDED!!!\n\n");
	}

	//Assigning Values
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS_ONE; j++)
		{
			iArray[i][j] = (i + 1) * (j + 1);
		}
	}

	//Displaying Array
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY : \n\n");
	for (i = 0; i < NUM_ROWS; i++)\
	{
		for (j = 0; j < NUM_COLUMNS_ONE; j++)
		{
			printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//Freeing Memory
	for (i = (NUM_ROWS - 1); i >= 0; i--)
	{
		free(iArray[i]);
		iArray[i] = NULL;
		printf("MEMORY ALLOCATED 2D ARRAY HAS BEEN SUCCESFULLY FREED!!!\n\n");
	}

	printf("\n\n");
	printf("*****SECOND MEMORY ALLOCATION TO 2D INTEGER ARRAY*****\n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		iArray[i] = (int*)malloc(NUM_COLUMNS_TWO * sizeof(int));
		if (iArray == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY!!! EXITTING NOW...\n\n");
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION IS SUCCEEDED!!!\n\n");
	}

	//Assigning Values
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS_TWO; j++)
		{
			iArray[i][j] = (i + 1) * (j + 1);
		}
	}

	//Displaying Array
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY : \n\n");
	for (i = 0; i < NUM_ROWS; i++)\
	{
		for (j = 0; j < NUM_COLUMNS_TWO; j++)
		{
			printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//Freeing Memory
	for (i = (NUM_ROWS - 1); i >= 0; i--)
	{
		free(iArray[i]);
		iArray[i] = NULL;
		printf("MEMORY ALLOCATED 2D ARRAY HAS BEEN SUCCESFULLY FREED!!!\n\n");
	}

	return(0);
}
