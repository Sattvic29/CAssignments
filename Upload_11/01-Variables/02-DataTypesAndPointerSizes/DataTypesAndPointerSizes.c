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
	printf("SIZES OF DATA AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");
	printf("Size Of (int)             : %zu \t \t \t Size Of Pointers to int (int*) : %zu\n\n", sizeof(int), sizeof(int*));
	printf("Size Of (float)           : %zu \t \t \t Size Of Pointer to float (float*) : %zu\n\n", sizeof(float), sizeof(float*));
	printf("Size Of (double)          : %zu \t \t \t Size Of Pointer to double (double*) : %zu\n\n", sizeof(double), sizeof(double*));
	printf("Size Of (char)            : %zu \t \t \t Size Of Pointer to char (char*) : %zu\n\n", sizeof(char), sizeof(char*));
	printf("Size Of (struct Employee) : %zu \t \t \t Size Of Pointer to struct Employee(struct Employee*) : %zu\n\n", sizeof(struct Employee), sizeof(struct Employee*));

	return(0);
}
