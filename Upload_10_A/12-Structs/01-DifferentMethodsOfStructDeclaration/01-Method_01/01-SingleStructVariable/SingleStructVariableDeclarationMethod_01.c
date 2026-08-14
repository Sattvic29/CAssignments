#include <stdio.h>

//Define Struct
struct MyData
{
	int i;
	float f;
	double d;
	char c;
} data;

int main(void)
{
	//variable declarations
	int i_size;
	int f_size;
	int d_size;
	int struct_MyData_size;

	//code
	data.i = 30;
	data.f = 11.25f;
	data.d = 1.2995;

	//'Struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);

	//calculating sizes
	i_size = sizeof(data.i);
	f_size = sizeof(data.f);
	d_size = sizeof(data.d);

	//Displaying size
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size of 'i' = %d bytes\n", i_size);
	printf("Size of 'f' = %d bytes\n", f_size);
	printf("Size of 'd' = %d bytes\n", d_size);

	//Size of entire 'struct MyData'
	struct_MyData_size = sizeof(struct MyData);

	printf("\n\n");

	return(0);
}
