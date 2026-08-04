#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3
#define NUM_DEPTH 2

int main(void)
{
	//variable declarations

	//IN-LINE INITIALIZATION
	int iArray[NUM_ROWS][NUM_COLUMNS][NUM_DEPTH] = { {{9, 18}, {27, 36}, {45, 54}},
													 {{8, 16}, {24, 32}, {40, 48}},
													 {{7, 14}, {21, 28}, {35, 42}},
													 {{6, 12}, {18, 24}, {30, 36}},
													 {{5, 10}, {15, 20}, {25, 30}} };

	int i, j, k;
	int iArray_1D[NUM_ROWS * NUM_COLUMNS * NUM_DEPTH];

	//code

	//DISPLAY 3D AARAY
	printf("\n\n");
	printf("Elements In The 3D Array : \n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		printf("*****ROW %d*****\n", (i + 1));
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("*****COLUMNS %d*****\n", (j + 1));
			for (k = 1; k < NUM_DEPTH; k++)
			{
				printf("iArray[%d][%d][%d] = %d\n", i, j, k, iArray[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	//CONVERTED 3D TO 1D 
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			for (k = 0; k < NUM_DEPTH; k++)
			{
				iArray_1D[(i * NUM_COLUMNS * NUM_DEPTH) + (j * NUM_DEPTH) + k] = iArray[i][j][k];
			}
		}
	}

	//DISPLAY 1D ARRAY
	printf("\n\n\n\n");
	printf("Elements In The 1D Array : \n\n");
	for (i = 0; i < (NUM_ROWS * NUM_COLUMNS * NUM_DEPTH); i++)
	{
		printf("iArray_1D[%d] = %d\n", i, iArray_1D[i]);
	}

	return(0);
}
