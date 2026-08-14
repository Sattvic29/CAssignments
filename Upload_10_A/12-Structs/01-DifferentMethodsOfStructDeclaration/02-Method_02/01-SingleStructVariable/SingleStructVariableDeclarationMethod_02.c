#include <stdio.h>

//Defining Struct
struct MyData
{
	int i;
	float f;
	double d;
};

struct MyData data;

int main(void)
{
	//variable declarations
	int i_size;
	int f_size;
	int d_size;
	int struct_MyData_size;

	//code
	data.i = 20;
	data.f = 29.07f;
	data.d = 2.3456;

	//Displyaing 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);

	//Sizes of 'struct MyData'
	i_size = sizeof(data.i);
	f_size = sizeof(data.f);
	d_size = sizeof(data.d);

	//Displyaing size of 'struct MyData'
	printf("\n\n");
	printf("SIZES (IN BYTES) OF DATA MEMBERS OF 'struct MyData' ARE: \n\n");
	printf("Size of 'i' = %d bytes\n", i_size);
	printf("Size of 'f' = %d bytes\n", f_size);
	printf("Size of 'd' = %d bytes\n", d_size);

	//size of entire 'struct MyData'
	struct_MyData_size = sizeof(struct MyData);

	printf("\n\n");
	printf("Size Of 'Struct MyData' : %d bytes\n\n", struct_MyData_size);
	printf("Size Of 'Struct MyData' : %d bytes\n\n", struct_MyData_size);

	return(0);
}
