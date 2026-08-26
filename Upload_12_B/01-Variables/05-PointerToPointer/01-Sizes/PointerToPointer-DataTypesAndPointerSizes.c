#include <stdio.h>

struct Employee
{
	char name[100];
	int age;
	float salary;
	char sex;
	char martial_status;
};

int main(void)
{
	//code
	printf("\n\n");
	printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");
	printf("Size Of (int) : %zu \t \t \t Size Of Pointer To int (int*) : %zu \t \t \t Size Of Pointer To Pointer To int (int**) : %zu\n\n", sizeof(int), sizeof(int*), sizeof(int**));

	printf("Size Of (float) : %zu \t \t \t Size Of Pointer To float (float*) : %zu \t \t \t Size Of Pointer To Pointer To float (float**) : %zu\n\n", sizeof(float), sizeof(float*), sizeof(float**));

	printf("Size Of (double) : %zu \t \t \t Size Of Pointer To double (double*) : %zu \t \t \t Size Of Pointer To Pointer To double (double**) : %zu\n\n", sizeof(double), sizeof(double*), sizeof(double**));

	printf("Size Of (char) : %zu \t \t \t Size Of Pointer To char (char*) : %zu \t \t \t Size Of Pointer To Pointer To char (char**) : %zu\n\n", sizeof(char), sizeof(char*), sizeof(char**));

	printf("Size Of (struct Employee) : %zu \t \t \t Size Of Pointer To struct Employee (struct Employee*) : %zu \t \t \t Size Of Pointer To Pointer To sturct Employee (struct Employee**) : %zu\n\n", sizeof(struct Employee), sizeof(struct Employee*), sizeof( struct Employee**));

	return(0);
}
