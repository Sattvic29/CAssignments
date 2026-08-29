#include <stdio.h>

int main(void)
{
	//variable delcrations
	int iArray_one[5];
	int iArray_Two[5][3];
	int iArray_Three[100][100][5];

	int num_rows_2D;
	int num_columns_2D;

	int num_rows_3D;
	int num_columns_3D;
	int depth_3D;

	//code
	printf("\n\n");
	printf("Size Of 1D Integer Array iArray_one = %zu\n", sizeof(iArray_one));
	printf("Number Of Elements In 1D Integer Array iArray_one = %zu\n", (sizeof(iArray_one) / sizeof(int)));
	
	printf("\n\n");
	printf("Number Of Rows In 2D Integer Array iArray_Two = %zu\n", sizeof(iArray_Two) / sizeof(iArray_Two));

	printf("Number of rows in 2D integer array iArray_Two = %zu\n", (sizeof(iArray_Two) / sizeof(iArray_Two[0])));
	num_rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two[0]));

	printf("Number Of Elements (columns) in Each Row In 2D Integer Array iArray_Two = %zu\n", (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0])));
	num_columns_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));

	printf("NUmber Of Elements In Total In 2D Array iArray_Two = %d\n", (num_rows_2D * num_columns_2D));

	printf("\n\n");

	printf("\n\n");
	printf("Size Of 3D Integer Array iArray_Three = %zu\n", sizeof(iArray_Three));

	printf("Number Of Rows In 3D Integer Array iArray_Three = %zu\n", (sizeof(iArray_Three) / sizeof(iArray_Three[0])));
	num_rows_3D = (sizeof(iArray_Three) / sizeof(iArray_Three[0]));

	printf("Number Of Elements (columns) In One Row In 3D Array iArray_Three = %zu\n", (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0])));
	num_columns_3D = (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0]));

	printf("Number Of Elements (Depth) In One Column In One Row In 3D Integr Array iArray_Three = %zu\n", (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0])));
	depth_3D = (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0]));

	printf("Number Of Elements In Total In 3D Array iArray_Three = %d\n", (num_rows_3D * num_columns_3D * depth_3D));

	printf("\n\n");

	return(0);
}
