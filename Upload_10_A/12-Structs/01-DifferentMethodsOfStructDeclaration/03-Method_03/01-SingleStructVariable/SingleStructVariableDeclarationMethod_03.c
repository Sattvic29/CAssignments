#include <stdio.h>

int main(void)
{
	//defing struct
	struct MyData
	{
		int i;
		float f;
		double d;
	} data;

	//variable declarations
	int i_size;
	int f_size;
	int d_size;
	int struct_MyData_size;

	//code
	data.i = 20;
	data.f = 3.14f;
	data.d = 1.2345;

	//Displaying 'struct MyData'
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);

	//Calculating size of data members
	i_size = sizeof(data.i);
	f_size = sizeof(data.f);
	d_size = sizeof(data.d);

	//Displaying sizes of data members
	printf("\n\n");
	printf("SIZE (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size Of 'i' = %d\n", i_size);
	printf("Size Of 'f' = %d\n", f_size);
	printf("Size Of 'd' = %d\n", d_size);

	//Calculating entire struct
	struct_MyData_size = sizeof(struct MyData);

	//Displyaing Size od entire struct
	printf("\n\n");
	printf("Size Of Entire Struct : %d bytes\n\n", struct_MyData_size);

	return(0);
}
