#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//variable declarations
	int** ptr_iArray = NULL;
	int i, j;
	int num_rows, num_columns;

	//code
	printf("\n\n");
	printf("Enter Number Of Rows : ");
	scanf("%d", &num_rows);

	printf("\n\n");
	printf("Enter Number Of Columns : ");
	scanf("%d", &num_columns);

	//Allocating Memory To 1D Array
	printf("\n\n");
	printf("*****MEMORY ALLOCATION TO 2D INTEGER ARRAY*****\n\n");
	ptr_iArray = (int**)malloc(num_rows * sizeof(int*));
	if (ptr_iArray == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY OF 2D INTEGER ARRAY!!! EXITTING NOW...\n\n");
		exit(0);
	}
	else
		printf("MEMORY ALLOCATION OF 2D INTEGER ARRAY SUCCEEDED!!!");

	for (i = 0; i < num_rows; i++)
	{
		ptr_iArray[i] = (int*)malloc(num_columns * sizeof(int));
		if (ptr_iArray[i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY OF 2D INTEGER ARRAY!!!EXITTING NOW...\n\n");
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION OF 2D INTEGER ARRAY SUCCEDED !!!\n\n");
	}
	for (i = 0; i < num_rows; i++)
	{
		for (j = 0; j < num_columns; j++)
		{
			ptr_iArray[i][j] = (i * 1) + (j * 1);
		}
	}

	for (i = 0; i < num_rows; i++)
	{
		printf("Base Address Of Row %d : ptr_iArray[%d] = %p\n", i, i, ptr_iArray[i], &ptr_iArray[i]);
	}
	printf("\n\n");

	for (i = 0; i < num_rows; i++)
	{
		for (j = 0; j < num_columns; j++)
		{
				printf("ptr_iArray[%d][%d] = %d \t At Address : %p\n", i, j, ptr_iArray[i][j], &ptr_iArray[i][j]);
		}
	}
	printf("\n\n");

	//Freeing Memory
	for (i = (num_rows - 1); i >= 0; i--)
	{
		if (ptr_iArray[i])
		{
			free(ptr_iArray[i]);
			ptr_iArray[i] = NULL;
			printf("MEMORY ALLOCATED HAS BEEN SUCCEDFULLY FREED!!!\n\n");
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
