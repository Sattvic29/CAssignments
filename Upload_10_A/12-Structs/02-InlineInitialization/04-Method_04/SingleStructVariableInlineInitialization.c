#include <stdio.h>

//defing struct
struct MyData
{
	int i;
	float f;
	double d;
	char c;
};

int main(void)
{
	//variable declarations
	//data_one
	struct MyData data_one = { 1, 1.2f, 1.2345, 'A' };

	//data_two
	struct MyData data_two = { 'A', 1.2f, 12.2324, 68 };

	//data_three
	struct MyData data_three = { 23, 'G' };

	//data_four
	struct MyData data_four = { 79 };

	//code
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_one' ARE : \n\n");
	printf("i = %d\n", data_one.i);
	printf("f = %f\n", data_one.f);
	printf("d = %lf\n", data_three.d);
	printf("c = %c\n\n", data_one.c);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_two' ARE : \n\n");
	printf("i = %d\n", data_two.i);
	printf("f = %f\n", data_two.f);
	printf("d = %lf\n", data_two.d);
	printf("c = %c\n\n", data_two.c);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_three' ARE : \n\n");
	printf("i = %d\n", data_three.i);
	printf("f = %f\n", data_three.f);
	printf("d = %lf\n", data_three.d);
	printf("c = %c\n\n", data_three.c);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_four' ARE : \n\n");
	printf("i = %d\n", data_four.i);
	printf("f = %f\n", data_four.f);
	printf("d = %lf\n", data_four.d);
	printf("c = %c\n\n", data_four.c);

	return(0);
}
