#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int* iArray[NUM_ROWS];
	int i, j;

	//code
	printf("\n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		iArray[i] = (int *)malloc(NUM_COLUMNS * sizeof(int));
		if (iArray[i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY!!! EXITTING NOW...\n\n", i);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION OF ROW %d OF 2D INTEGER ARRAY SUCCEDED!!!\n\n", i);
	}

	//Assigning Values
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			iArray[i][j] = (i + 1) * (j + 1);
		}
	}

	//Displating Values
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY : \n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
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
		
		printf("MEMORY ALLOCATED TO ROW % OF 2D INTEGER ARRAY HAS BEEN SUCCESFULLY FREED !!!\n\n", i);
	}

	return(0);
}
