#include <stdio.h>

//Defining Struct
struct MyData
{
	int i;
	float f;
	double d;
};

int main(void)
{
	//variable declarations
	struct MyData data;
	
	int i_size;
	int f_size;
	int d_size;
	int struct_MyData_size;

	//code
	data.i = 20;
	data.f = 3.14f;
	data.d = 1.2334;

	//Displaying Values Of The 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);

	//Calcuating sizes of data members
	i_size = sizeof(data.i);
	f_size = sizeof(data.f);
	d_size = sizeof(data.d);

	//Displaying Size of data members
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size Of 'i' = %d bytes\n", i_size);
	printf("Size Of 'f' = %d bytes\n", f_size);
	printf("Size Of 'd' = %d bytes\n", d_size);

	//Displaying Sizes of entire 'struct MyData'
	struct_MyData_size = sizeof(struct MyData);

	//Displaying size of the entire 'struct MyData'
	printf("\n\n");
	printf("Size Of 'struct MyData' : %d bytes\n", struct_MyData_size);

	return(0);
}
